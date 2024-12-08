//https://adventofcode.com/2024/day/9

#include <iostream>
#include <string>
#include <vector>

#include "Day9Data.h"

constexpr int EMPTY_SPACE = -1;

int main(int argc, char* argv[])
{
    constexpr auto& data = realData;
    const auto NUM_DATA = strlen(data);
    std::vector<int> result;
    result.reserve(NUM_DATA * 5); //rough estimation
    //okay, we iterate over each char of the string, read it as a number (x) and then add alternating file or space to the result-string
    int currentFileId = 0;
    bool isFile = true;
    for (size_t i = 0; i < NUM_DATA; ++i)
    {
        int currentAmount = testData[i] - '0';
        if (isFile)
        {
            //add x times the current item to the result
            for (int x = 0; x < currentAmount; ++x)
            {
                result.push_back(currentFileId);
            }
            currentFileId++;
        }
        else
        {
            //add x times the empty space to the result
            for (int x = 0; x < currentAmount; ++x)
            {
                result.push_back(EMPTY_SPACE);
            }
        }
        isFile = !isFile;
    }

    // //test print
    // for (const auto& i : result)
    // {
    //     i == EMPTY_SPACE ? std::cout << "." : std::cout << i;
    // }

    //now we remove the empty spaces from the result, we do so by filling them with the numbers from the end of the vector
    uint64_t currentPosFromBack = result.size() - 1;
    for (uint64_t i=0; i < result.size() && i < currentPosFromBack; ++i)
    {
        if (result[i] == EMPTY_SPACE)
        {
            while (result[currentPosFromBack] == EMPTY_SPACE)
                currentPosFromBack--;
            result[i] = result[currentPosFromBack];
            currentPosFromBack--;
        }
    }
    result.resize(currentPosFromBack + 1);

    // //test print cleaned up string
    // std::cout << '\n' << "After Cleaning: ";
    // for (const auto& i : result)
    // {
    //     i == EMPTY_SPACE ? std::cout << "." : std::cout << i;
    // }

    //now we need to calculate the score, we iterate over the result and calculate the score, for each position its current ID * its position
    uint64_t score = 0;
    for (size_t i = 0; i < result.size(); ++i)
    {
        score += result[i] * i;
    }
    std::cout << '\n' << "filesystem checksum: " << score << '\n';
    
    return 0;
}
