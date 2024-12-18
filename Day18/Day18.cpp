#include <iostream>
#include <queue>
#include <vector>

//#define USE_TEST_DATA
#include "Day18Data.h"

constexpr char FREE = '.';
constexpr char CORRUPTED = '#';

constexpr Vector2 START_POS = {0, 0};
constexpr Vector2 END_POS = {MAP_WIDTH - 1, MAP_HEIGHT - 1};

constexpr const char* PATH_COLOR = "\033[32m";
constexpr const char* CORRUPTED_COLOR = "\033[38;5;94m";
constexpr const char* DEFAULT_COLOR = "\033[0m";

void ClearMap()
{
    memset(s_Map, FREE, sizeof(s_Map));
}

void SetTile(Vector2 pos, char tile)
{
    s_Map[pos.y][pos.x] = tile;
}

char GetTile(Vector2 pos)
{
    return s_Map[pos.y][pos.x];
}

void SimulateFallingBytes(int endBit, int startBit = 0)
{
    for (int i = startBit; i < endBit && i < s_NumIncomingData; i++)
    {
        SetTile(s_IncomingData[i], CORRUPTED);
    }
}

void PrintMap(const std::vector<Vector2>& path)
{
    for (int y = 0; y < MAP_HEIGHT; ++y)
    {
        for (int x = 0; x < MAP_WIDTH; ++x)
        {
            Vector2 pos = {x, y};
            if (std::find(path.begin(), path.end(), pos) != path.end())
            {
                std::cout << PATH_COLOR << 'O';
            }
            else
            {
                char tile = GetTile(pos);
                if (tile == CORRUPTED)
                    std::cout << CORRUPTED_COLOR << tile;
                else
                    std::cout << DEFAULT_COLOR << tile;
            }
        }
        std::cout << '\n';
    }
    std::cout << std::endl;
}

bool IsInBounds(Vector2 pos)
{
    return pos.x >= 0 && pos.x < MAP_WIDTH && pos.y >= 0 && pos.y < MAP_HEIGHT;
}


//do a djikstra to find the shortest path
Vector2 s_Directions[] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}; //right,down,left,up

struct PathNode
{
    Vector2 pos; // Position in the map.
    uint32_t distance = -1;   // Distance from the start position, -1 means not visited
    PathNode* pPreviousNode = nullptr; // Previous node in the path, nullptr means not visited

    bool IsVisited() const { return pPreviousNode != nullptr; }

    bool operator<(const PathNode& other) const
    {
        return distance > other.distance;
    }
};
PathNode pathNodes[MAP_HEIGHT][MAP_WIDTH];

std::vector<Vector2>& FindPath(Vector2 startPos, Vector2 endPos)
{
    //clear the path nodes
    for (int y = 0; y < MAP_HEIGHT; ++y)
    {
        for (int x = 0; x < MAP_WIDTH; ++x)
        {
            pathNodes[y][x].distance = -1;
            pathNodes[y][x].pPreviousNode = nullptr;
            pathNodes[y][x].pos = {x, y}; //todo: only do once
        }
    }
    static std::vector<Vector2> path;
    path.clear();
    
    std::priority_queue<PathNode> queue;
    pathNodes[startPos.y][startPos.x].distance = 0;
    //pathNodes[startPos.y][startPos.x].pos = startPos;
    queue.push(pathNodes[startPos.y][startPos.x]);

    while (!queue.empty())
    {
        PathNode currentNode = queue.top();
        queue.pop();

        Vector2 currentPos = currentNode.pos;

        if (currentPos == endPos)
        {
            while (currentPos != startPos) //backtrack the path
            {
                path.push_back(currentPos);
                currentPos = pathNodes[currentPos.y][currentPos.x].pPreviousNode->pos;
            }
            path.push_back(startPos);
            std::reverse(path.begin(), path.end());
            return path;
        }

        for (const auto& direction : s_Directions)
        {
            Vector2 nextPos = {currentPos.x + direction.x, currentPos.y + direction.y};

            if (!IsInBounds(nextPos) || pathNodes[nextPos.y][nextPos.x].IsVisited() || GetTile(nextPos) == CORRUPTED)
                continue;

            uint32_t newDistance = currentNode.distance + 1;

            if (newDistance < pathNodes[nextPos.y][nextPos.x].distance)
            {
                pathNodes[nextPos.y][nextPos.x].distance = newDistance;
                //pathNodes[nextPos.y][nextPos.x].pos = nextPos;
                pathNodes[nextPos.y][nextPos.x].pPreviousNode = &pathNodes[currentPos.y][currentPos.x];
                queue.push(pathNodes[nextPos.y][nextPos.x]);
            }
        }
    }

    return path;
}

#define IS_PART2

int main(int argc, char* argv[])
{
    ClearMap();

#if !defined(IS_PART2)
    
    SimulateFallingBytes(NUM_INITIAL_FALLEN_BYTES);
    auto& path = FindPath(START_POS, END_POS);
    PrintMap(path);

    std::cout << "Path length: " << path.size() -1 << std::endl;
    
#else
    
    //lets try brutefore first, we simple simulate the falling bytes and check if the path is still reachable
    SimulateFallingBytes(NUM_INITIAL_FALLEN_BYTES);
    for (int i = NUM_INITIAL_FALLEN_BYTES; i < s_NumIncomingData; i++)
    {
        SimulateFallingBytes(i + 1, i);
        const auto& path = FindPath(START_POS, END_POS);
        if (path.empty())
        {
            s_Map[s_IncomingData[i].y][s_IncomingData[i].x] = FREE;
            auto path = FindPath(START_POS, s_IncomingData[i]);
            path.pop_back();
            s_Map[s_IncomingData[i].y][s_IncomingData[i].x] = CORRUPTED;
            PrintMap(path);
            std::cout << "First byte that will prevent the exit from being reachable: " << s_IncomingData[i].x << ", " << s_IncomingData[i].y << " fallen after " << i << "ns" << std::endl;
            break;
        }
    }
    
#endif
    
    return 0;
}