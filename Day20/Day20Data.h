#pragma once
#include <iterator>

#if defined USE_TEST_DATA

static constexpr char s_Map[][16] = {
    "###############",
    "#...#...#.....#",
    "#.#.#.#.#.###.#",
    "#S#...#.#.#...#",
    "#######.#.#.###",
    "#######.#.#...#",
    "#######.#.###.#",
    "###..E#...#...#",
    "###.#######.###",
    "#...###...#...#",
    "#.#####.#.###.#",
    "#.#...#.#.#...#",
    "#.#.#.#.#.#.###",
    "#...#...#...###",
    "###############" };

#else

static constexpr char s_Map[][142] = {
"#############################################################################################################################################",
"#...#...#.........#...###...#...###.....###...#...#.....#...#.....#.....#...#.....#...#.......#...#...#...#...###.................###...#...#",
"#.#.#.#.#.#######.#.#.###.#.#.#.###.###.###.#.#.#.#.###.#.#.#.###.#.###.#.#.#.###.#.#.#.#####.#.#.#.#.#.#.#.#.###.###############.###.#.#.#.#",
"#.#...#.#...#...#...#...#.#.#.#...#...#.....#...#.#.#...#.#.#.#...#...#.#.#.#.#...#.#.#.....#.#.#.#.#.#.#.#.#.....#...............#...#.#.#.#",
"#.#####.###.#.#.#######.#.#.#.###.###.###########.#.#.###.#.#.#.#####.#.#.#.#.#.###.#.#####.#.#.#.#.#.#.#.#.#######.###############.###.#.#.#",
"#.....#...#...#.......#...#.#...#...#.....#...#...#.#...#.#.#.#...#...#.#.#.#.#...#.#.#...#.#.#.#...#.#.#.#.#.......###.....###...#.#...#.#.#",
"#####.###.###########.#####.###.###.#####.#.#.#.###.###.#.#.#.###.#.###.#.#.#.###.#.#.#.#.#.#.#.#####.#.#.#.#.#########.###.###.#.#.#.###.#.#",
"#...#...#.###...#...#.....#...#...#.#...#...#.#.....#...#.#...#...#...#.#.#...#...#.#...#.#.#.#.....#.#.#...#.#.......#...#...#.#.#.#...#.#.#",
"#.#.###.#.###.#.#.#.#####.###.###.#.#.#.#####.#######.###.#####.#####.#.#.#####.###.#####.#.#.#####.#.#.#####.#.#####.###.###.#.#.#.###.#.#.#",
"#.#.#...#.....#...#.#...#...#.###.#...#...###.......#.###...#...#...#.#.#.....#...#.....#.#.#.......#.#.....#.#.....#.#...#...#.#.#...#...#.#",
"#.#.#.#############.#.#.###.#.###.#######.#########.#.#####.#.###.#.#.#.#####.###.#####.#.#.#########.#####.#.#####.#.#.###.###.#.###.#####.#",
"#.#...#...#.......#...#.#...#...#.#.......#...#.....#...#...#.....#.#.#.###...#...#...#.#.#.........#.#.....#.....#.#.#...#...#.#...#.#.....#",
"#.#####.#.#.#####.#####.#.#####.#.#.#######.#.#.#######.#.#########.#.#.###.###.###.#.#.#.#########.#.#.#########.#.#.###.###.#.###.#.#.#####",
"#.#...#.#...#...#...#...#.....#...#...#...#.#.#.......#...#.....#...#.#...#.#...#...#.#.#.#...#...#.#.#...#...#...#.#.....#...#.#...#.#.....#",
"#.#.#.#.#####.#.###.#.#######.#######.#.#.#.#.#######.#####.###.#.###.###.#.#.###.###.#.#.#.#.#.#.#.#.###.#.#.#.###.#######.###.#.###.#####.#",
"#.#.#.#.#.....#...#.#...#...#.......#.#.#.#.#.....###...#...###...#...#...#.#.....#...#.#.#.#.#.#.#.#.#...#.#...###...#...#.....#.#...#.....#",
"#.#.#.#.#.#######.#.###.#.#.#######.#.#.#.#.#####.#####.#.#########.###.###.#######.###.#.#.#.#.#.#.#.#.###.#########.#.#.#######.#.###.#####",
"#.#.#.#.#...#...#...#...#.#.#...#...#...#...#.....#...#.#.###.....#...#.###.#.......#...#.#.#...#.#.#.#.#...#.......#...#.#.......#.#...#...#",
"#.#.#.#.###.#.#.#####.###.#.#.#.#.###########.#####.#.#.#.###.###.###.#.###.#.#######.###.#.#####.#.#.#.#.###.#####.#####.#.#######.#.###.#.#",
"#...#...#...#.#.....#...#.#.#.#.#.....#.......#...#.#...#.#...#...#...#...#.#.###...#...#.#...#...#.#...#...#.#.....###...#.#.......#...#.#.#",
"#########.###.#####.###.#.#.#.#.#####.#.#######.#.#.#####.#.###.###.#####.#.#.###.#.###.#.###.#.###.#######.#.#.#######.###.#.#########.#.#.#",
"#.......#.....#...#...#...#.#.#.#...#.#...#...#.#.#.....#.#.#...#...#...#.#.#.#...#...#.#.#...#.#...#.......#.#.....#...#...#.#.........#.#.#",
"#.#####.#######.#.###.#####.#.#.#.#.#.###.#.#.#.#.#####.#.#.#.###.###.#.#.#.#.#.#####.#.#.#.###.#.###.#######.#####.#.###.###.#.#########.#.#",
"#.....#...###...#.###...#...#.#.#.#.#...#.#.#...#.#...#.#...#.#...#...#...#.#.#.#.....#.#.#...#.#...#...#...#.#.....#...#.#...#...........#.#",
"#####.###.###.###.#####.#.###.#.#.#.###.#.#.#####.#.#.#.#####.#.###.#######.#.#.#.#####.#.###.#.###.###.#.#.#.#.#######.#.#.###############.#",
"#...#.#...#...#...#...#.#.....#.#.#.###.#.#.#.....#.#.#.#...#.#.#...#...#...#.#.#...###.#.#...#.....#...#.#.#.#...#...#.#...#...#.........#.#",
"#.#.#.#.###.###.###.#.#.#######.#.#.###.#.#.#.#####.#.#.#.#.#.#.#.###.#.#.###.#.###.###.#.#.#########.###.#.#.###.#.#.#.#####.#.#.#######.#.#",
"#.#...#...#...#.#...#...#.....#...#.#...#...#...#...#.#...#.#.#.#.....#.#...#.#.#...#...#.#.....#...#.#...#.#.#...#.#...#...#.#.#.......#.#.#",
"#.#######.###.#.#.#######.###.#####.#.#########.#.###.#####.#.#.#######.###.#.#.#.###.###.#####.#.#.#.#.###.#.#.###.#####.#.#.#.#######.#.#.#",
"#.......#.#...#.#...#...#.#...#...#...#.........#...#...###.#.#...#.....###.#.#.#.###...#.#...#.#.#...#.#...#.#.#...#...#.#.#.#...#...#.#.#.#",
"#######.#.#.###.###.#.#.#.#.###.#.#####.###########.###.###.#.###.#.#######.#.#.#.#####.#.#.#.#.#.#####.#.###.#.#.###.#.#.#.#.###.#.#.#.#.#.#",
"#...#...#.#...#.###...#...#...#.#.#...#...#.....###...#...#.#.#...#.#####...#.#.#.#...#.#.#.#...#.....#.#.###.#.#.#...#.#.#.#...#...#...#...#",
"#.#.#.###.###.#.#############.#.#.#.#.###.#.###.#####.###.#.#.#.###.#####.###.#.#.#.#.#.#.#.#########.#.#.###.#.#.#.###.#.#.###.#############",
"#.#.#...#.....#.#.....#.....#...#...#...#.#.#...#...#.#...#.#.#.#...#####...#.#.#.#.#.#.#.#...#.......#.#.#...#.#.#.###...#.....###.........#",
"#.#.###.#######.#.###.#.###.###########.#.#.#.###.#.#.#.###.#.#.#.#########.#.#.#.#.#.#.#.###.#.#######.#.#.###.#.#.###############.#######.#",
"#.#...#.......#.#.#...#...#.#...###...#.#.#.#.#...#.#.#...#.#...#.#########S#.#.#.#.#.#.#...#.#...#...#.#...#...#.#.......#.....#...#...#...#",
"#.###.#######.#.#.#.#####.#.#.#.###.#.#.#.#.#.#.###.#.###.#.#####.###########.#.#.#.#.#.###.#.###.#.#.#.#####.###.#######.#.###.#.###.#.#.###",
"#...#.###.....#.#.#.###...#.#.#.#...#.#.#.#.#.#.###.#.###.#.#.....###########.#.#.#.#.#.#...#...#.#.#...#...#.#...#...#...#.#...#.#...#...###",
"###.#.###.#####.#.#.###.###.#.#.#.###.#.#.#.#.#.###.#.###.#.#.###############.#.#.#.#.#.#.#####.#.#.#####.#.#.#.###.#.#.###.#.###.#.#########",
"#...#.#...#...#...#...#...#.#.#.#...#.#.#.#.#.#.#...#...#...#...#############.#.#.#.#...#.#...#.#.#.#.....#...#.#...#...#...#.....#...#.....#",
"#.###.#.###.#.#######.###.#.#.#.###.#.#.#.#.#.#.#.#####.#######.#############.#.#.#.#####.#.#.#.#.#.#.#########.#.#######.###########.#.###.#",
"#...#.#.....#...#...#.....#...#.....#...#...#.#.#.#...#.......#.#######.......#.#.#.....#...#.#.#.#.#.#.........#.....#...#...........#.#...#",
"###.#.#########.#.#.#########################.#.#.#.#.#######.#.#######.#######.#.#####.#####.#.#.#.#.#.#############.#.###.###########.#.###",
"#...#...###...#.#.#.#.......#...............#...#.#.#...#...#.#.#######.#.....#.#.#...#.#.....#.#.#.#.#.#.............#...#.###.........#...#",
"#.#####.###.#.#.#.#.#.#####.#.#############.#####.#.###.#.#.#.#.#######.#.###.#.#.#.#.#.#.#####.#.#.#.#.#.###############.#.###.###########.#",
"#.#...#.#...#...#.#.#.#.....#.#.............###...#...#.#.#...#...#####.#.#...#.#.#.#...#.......#...#.#.#.............#...#.....#...#...#...#",
"#.#.#.#.#.#######.#.#.#.#####.#.###############.#####.#.#.#######.#####.#.#.###.#.#.#################.#.#############.#.#########.#.#.#.#.###",
"#...#.#...#.....#.#.#.#...#...#...............#.....#.#.#.......#...###.#.#.....#.#.###.........#...#...#...#...#.....#...#...#...#...#.#...#",
"#####.#####.###.#.#.#.###.#.#################.#####.#.#.#######.###.###.#.#######.#.###.#######.#.#.#####.#.#.#.#.#######.#.#.#.#######.###.#",
"#.....#.....###...#...###...###...........#...#...#...#.......#.###.###.#.#.......#...#.#.....#...#.......#...#...#...#...#.#.#.....###...#.#",
"#.#####.#######################.#########.#.###.#.###########.#.###.###.#.#.#########.#.#.###.#####################.#.#.###.#.#####.#####.#.#",
"#.......#.......................#...#...#...#...#.....#.....#...#...###.#.#.#...#.....#...#...#...#.......#...#...#.#...#...#.......#...#...#",
"#########.#######################.#.#.#.#####.#######.#.###.#####.#####.#.#.#.#.#.#########.###.#.#.#####.#.#.#.#.#.#####.###########.#.#####",
"#.........#...#...#...#.......#...#...#.....#.#.......#.#...#...#E#####.#.#.#.#.#.....#.....#...#...#...#...#...#...#.....#...#.......#.....#",
"#.#########.#.#.#.#.#.#.#####.#.###########.#.#.#######.#.###.#.#######.#.#.#.#.#####.#.#####.#######.#.#############.#####.#.#.###########.#",
"#.........#.#.#.#.#.#...#...#...###.........#.#.#...#...#.....#...#.....#.#.#.#...#...#.....#.#.......#.............#.....#.#.#.#.........#.#",
"#########.#.#.#.#.#.#####.#.#######.#########.#.#.#.#.###########.#.#####.#.#.###.#.#######.#.#.###################.#####.#.#.#.#.#######.#.#",
"#.........#.#...#...###...#.........#...###...#...#...#...#...#...#...#...#...#...#...#.....#.#...................#.#...#...#...#...#...#...#",
"#.#########.###########.#############.#.###.###########.#.#.#.#.#####.#.#######.#####.#.#####.###################.#.#.#.###########.#.#.#####",
"#...........#...#...#...#...#...#.....#.....#.........#.#.#.#.#...###.#.......#.....#.#.......###...#...#...#.....#...#.#...#.......#.#.....#",
"#############.#.#.#.#.###.#.#.#.#.###########.#######.#.#.#.#.###.###.#######.#####.#.###########.#.#.#.#.#.#.#########.#.#.#.#######.#####.#",
"#.....#.......#.#.#.#...#.#...#...#.........#.......#.#.#...#.#...#...#.......#...#...#...#.......#...#...#.#...###...#...#.#.#.......#.....#",
"#.###.#.#######.#.#.###.#.#########.#######.#######.#.#.#####.#.###.###.#######.#.#####.#.#.###############.###.###.#.#####.#.#.#######.#####",
"#.#...#.......#...#.....#...#.......#...###...#.....#.#.....#.#...#...#.###...#.#.#...#.#.#...............#.....#...#.....#...#.#.......#...#",
"#.#.#########.#############.#.#######.#.#####.#.#####.#####.#.###.###.#.###.#.#.#.#.#.#.#.###############.#######.#######.#####.#.#######.#.#",
"#.#.#...#.....#...#.....#...#.........#.#...#...#...#.......#.#...#...#...#.#...#...#.#.#.#...............#.....#.#.....#.......#...#.....#.#",
"#.#.#.#.#.#####.#.#.###.#.#############.#.#.#####.#.#########.#.###.#####.#.#########.#.#.#.###############.###.#.#.###.###########.#.#####.#",
"#.#.#.#.#.......#...#...#.#.............#.#.......#.........#.#.#...#...#.#.#...#...#.#.#.#...............#.#...#.#.###.............#.#.....#",
"#.#.#.#.#############.###.#.#############.#################.#.#.#.###.#.#.#.#.#.#.#.#.#.#.###############.#.#.###.#.#################.#.#####",
"#.#...#...............#...#...............#...#...#...#...#.#.#.#...#.#.#.#.#.#.#.#.#...#.........#.......#.#.#...#.......#...#...###.#.#...#",
"#.#####################.###################.#.#.#.#.#.#.#.#.#.#.###.#.#.#.#.#.#.#.#.#############.#.#######.#.#.#########.#.#.#.#.###.#.#.#.#",
"#...#...#.....#...#...#.#.................#.#...#...#...#...#...###.#.#.#.#.#.#...#...#.........#.#.........#...#...#.....#.#...#.....#...#.#",
"###.#.#.#.###.#.#.#.#.#.#.###############.#.#######################.#.#.#.#.#.#######.#.#######.#.###############.#.#.#####.###############.#",
"###...#...###...#...#...#...............#.#.............###...#...#...#...#...#.......#.#.......#.................#.#...#...#...#...#.......#",
"#######################################.#.#############.###.#.#.#.#############.#######.#.#########################.###.#.###.#.#.#.#.#######",
"###.....#.......###.....................#...#.....#...#...#.#.#.#...#...#.....#.........#...#.........#...#.......#...#...#...#.#.#.#.......#",
"###.###.#.#####.###.#######################.#.###.#.#.###.#.#.#.###.#.#.#.###.#############.#.#######.#.#.#.#####.###.#####.###.#.#.#######.#",
"#...#...#.#...#...#.#.......#...#...#...###...###.#.#.#...#.#.#.#...#.#.#...#...........###...#.....#...#...#.....###.#...#...#...#.#...#...#",
"#.###.###.#.#.###.#.#.#####.#.#.#.#.#.#.#########.#.#.#.###.#.#.#.###.#.###.###########.#######.###.#########.#######.#.#.###.#####.#.#.#.###",
"#...#.###...#...#.#...#...#...#...#...#.........#.#.#.#...#.#...#.....#...#.....#.....#.......#.#...#...#...#.......#.#.#...#.....#.#.#.#.###",
"###.#.#########.#.#####.#.#####################.#.#.#.###.#.#############.#####.#.###.#######.#.#.###.#.#.#.#######.#.#.###.#####.#.#.#.#.###",
"#...#.#.....###.#.#...#.#.###...................#...#.#...#.#.....#.......#...#...###.......#...#.....#...#.........#.#.###.......#...#.#...#",
"#.###.#.###.###.#.#.#.#.#.###.#######################.#.###.#.###.#.#######.#.#############.#########################.#.###############.###.#",
"#...#...#...#...#...#...#...#.....................###...#...#...#...###.....#...#...###...#.#...#...............#...#...#...###...#...#.#...#",
"###.#####.###.#############.#####################.#######.#####.#######.#######.#.#.###.#.#.#.#.#.#############.#.#.#####.#.###.#.#.#.#.#.###",
"#...#...#.#...#...........#.#.................#...#...#...#.....#.....#...#.....#.#.#...#...#.#.#.#.............#.#...#...#.....#...#.#.#...#",
"#.###.#.#.#.###.#########.#.#.###############.#.###.#.#.###.#####.###.###.#.#####.#.#.#######.#.#.#.#############.###.#.#############.#.###.#",
"#.....#.#.#.....#.......#.#.#...............#.#...#.#.#...#.#...#.#...#...#...#...#.#.......#.#...#...#...###...#.#...#.#.............#.....#",
"#######.#.#######.#####.#.#.###############.#.###.#.#.###.#.#.#.#.#.###.#####.#.###.#######.#.#######.#.#.###.#.#.#.###.#.###################",
"#.......#.......#.....#.#.#.#.............#.#.....#.#...#.#.#.#.#.#...#.#.....#...#.###...#.#...#...#...#.....#...#.....#.............#.....#",
"#.#############.#####.#.#.#.#.###########.#.#######.###.#.#.#.#.#.###.#.#.#######.#.###.#.#.###.#.#.#################################.#.###.#",
"#...#...#.....#.#.....#...#...#.........#...#...###...#.#.#...#.#...#.#.#.#...#...#.....#.#.#...#.#...........#.....#.........#.......#.#...#",
"###.#.#.#.###.#.#.#############.#######.#####.#.#####.#.#.#####.###.#.#.#.#.#.#.#########.#.#.###.###########.#.###.#.#######.#.#######.#.###",
"###...#...#...#...#.....#...#...#.......#...#.#.#.....#.#.#.....#...#...#.#.#.#.....#.....#...###...........#.#.#...#.......#.#.....#...#...#",
"###########.#######.###.#.#.#.###.#######.#.#.#.#.#####.#.#.#####.#######.#.#.#####.#.#####################.#.#.#.#########.#.#####.#.#####.#",
"#...#...#...#...#...###.#.#...###.......#.#.#.#.#.....#...#.....#.#.....#.#.#...#...#...###...###...........#.#.#...#...#...#.#...#...#.....#",
"#.#.#.#.#.###.#.#.#####.#.#############.#.#.#.#.#####.#########.#.#.###.#.#.###.#.#####.###.#.###.###########.#.###.#.#.#.###.#.#.#####.#####",
"#.#...#...#...#...#...#...#.......#...#.#.#.#.#...#...#.......#.#...###.#...#...#...#...#...#...#.........###.#...#.#.#.#...#.#.#.#...#.....#",
"#.#########.#######.#.#####.#####.#.#.#.#.#.#.###.#.###.#####.#.#######.#####.#####.#.###.#####.#########.###.###.#.#.#.###.#.#.#.#.#.#####.#",
"#.....#.....#...#...#...###.....#...#...#.#.#...#.#...#.....#...###...#.#.....#.....#.#...#.....#...#...#...#.....#...#.#...#...#...#...#...#",
"#####.#.#####.#.#.#####.#######.#########.#.###.#.###.#####.#######.#.#.#.#####.#####.#.###.#####.#.#.#.###.###########.#.#############.#.###",
"#...#...#...#.#.#.....#.#...###.......#...#...#.#.#...#.....#.......#.#.#.....#.....#.#.#...#...#.#...#.....#.........#.#.............#.#...#",
"#.#.#####.#.#.#.#####.#.#.#.#########.#.#####.#.#.#.###.#####.#######.#.#####.#####.#.#.#.###.#.#.###########.#######.#.#############.#.###.#",
"#.#.#.....#...#.......#...#...#.......#.#.....#.#.#...#.#...#.......#.#.#.....#...#.#.#.#.###.#.#.........#...#.......#...#...........#.....#",
"#.#.#.#######################.#.#######.#.#####.#.###.#.#.#.#######.#.#.#.#####.#.#.#.#.#.###.#.#########.#.###.#########.#.#################",
"#.#...#...#.................#...#...#...#.#...#.#.#...#.#.#...#...#.#.#.#.#...#.#.#.#...#.#...#.#...#...#.#.#...#.....#...#...#.............#",
"#.#####.#.#.###############.#####.#.#.###.#.#.#.#.#.###.#.###.#.#.#.#.#.#.#.#.#.#.#.#####.#.###.#.#.#.#.#.#.#.###.###.#.#####.#.###########.#",
"#.....#.#.#.#.....###...#...#...#.#...#...#.#.#.#.#...#.#...#.#.#.#.#.#.#.#.#.#.#...#.....#...#...#.#.#.#...#.###.#...#.....#...#...........#",
"#####.#.#.#.#.###.###.#.#.###.#.#.#####.###.#.#.#.###.#.###.#.#.#.#.#.#.#.#.#.#.#####.#######.#####.#.#.#####.###.#.#######.#####.###########",
"#.....#.#...#...#.....#...#...#.#.....#...#.#...#.#...#.#...#.#.#.#.#...#.#.#.#...#...#.....#...#...#.#.....#.....#.#...###.#...#...#...#...#",
"#.#####.#######.###########.###.#####.###.#.#####.#.###.#.###.#.#.#.#####.#.#.###.#.###.###.###.#.###.#####.#######.#.#.###.#.#.###.#.#.#.#.#",
"#.....#...#...#...#...#...#.#...#...#...#...###...#.#...#...#...#.#.....#.#.#...#.#...#...#...#.#...#...#...#.....#...#...#.#.#...#...#...#.#",
"#####.###.#.#.###.#.#.#.#.#.#.###.#.###.#######.###.#.#####.#####.#####.#.#.###.#.###.###.###.#.###.###.#.###.###.#######.#.#.###.#########.#",
"#...#.....#.#...#...#.#.#.#.#...#.#...#.#.......#...#.#...#.....#...#...#...###.#.###.#...#...#.#...#...#...#.###.#.......#...###.#...#.....#",
"#.#.#######.###.#####.#.#.#.###.#.###.#.#.#######.###.#.#.#####.###.#.#########.#.###.#.###.###.#.###.#####.#.###.#.#############.#.#.#.#####",
"#.#...#...#...#.......#.#...#...#.#...#.#.#...#...###...#...#...###.#.........#...#...#...#.#...#.....#...#.#.#...#.....###.....#.#.#.#.....#",
"#.###.#.#.###.#########.#####.###.#.###.#.#.#.#.###########.#.#####.#########.#####.#####.#.#.#########.#.#.#.#.#######.###.###.#.#.#.#####.#",
"#...#.#.#.###...#...#...#.....#...#...#.#.#.#.#.#...#.......#.#...#.....#...#.#.....#...#.#.#...#.......#...#.#.......#...#.#...#...#.....#.#",
"###.#.#.#.#####.#.#.#.###.#####.#####.#.#.#.#.#.#.#.#.#######.#.#.#####.#.#.#.#.#####.#.#.#.###.#.###########.#######.###.#.#.###########.#.#",
"#...#...#.#...#...#.#.###.....#.#.....#.#.#.#.#...#.#.#.....#...#.....#.#.#...#...#...#...#.....#.#.....#...#.......#...#...#...#.....###...#",
"#.#######.#.#.#####.#.#######.#.#.#####.#.#.#.#####.#.#.###.#########.#.#.#######.#.#############.#.###.#.#.#######.###.#######.#.###.#######",
"#.......#...#.......#...###...#.#.#...#.#...#.#.....#...###...#...#...#.#.....###...#.........###...#...#.#.....#...###.#...#...#.#...#...###",
"#######.###############.###.###.#.#.#.#.#####.#.#############.#.#.#.###.#####.#######.#######.#######.###.#####.#.#####.#.#.#.###.#.###.#.###",
"#.......#...#...#.....#...#...#.#...#.#.#.....#.......#...#...#.#.#...#.#...#.......#.......#.........#...#.....#.....#.#.#.#.....#.....#...#",
"#.#######.#.#.#.#.###.###.###.#.#####.#.#.###########.#.#.#.###.#.###.#.#.#.#######.#######.###########.###.#########.#.#.#.###############.#",
"#...#...#.#...#.#...#...#.###.#.###...#.#.#...#.....#.#.#.#.#...#.....#.#.#...#.....###...#.#.......#...###.......#...#...#.#.............#.#",
"###.#.#.#.#####.###.###.#.###.#.###.###.#.#.#.#.###.#.#.#.#.#.#########.#.###.#.#######.#.#.#.#####.#.###########.#.#######.#.###########.#.#",
"#...#.#.#...#...#...###.#.#...#...#.#...#.#.#.#...#.#.#.#...#.........#.#.#...#.......#.#...#.....#.#.......#.....#.....###.#...........#.#.#",
"#.###.#.###.#.###.#####.#.#.#####.#.#.###.#.#.###.#.#.#.#############.#.#.#.#########.#.#########.#.#######.#.#########.###.###########.#.#.#",
"#.#...#...#.#.#...#.....#.#...#...#.#...#...#.#...#...#...#...#...#...#.#.#...#.....#.#...#...#...#.....#...#.#...#...#...#...#.......#.#.#.#",
"#.#.#####.#.#.#.###.#####.###.#.###.###.#####.#.#########.#.#.#.#.#.###.#.###.#.###.#.###.#.#.#.#######.#.###.#.#.#.#.###.###.#.#####.#.#.#.#",
"#...#.....#.#.#.###...#...#...#...#.#...#...#.#...###.....#.#.#.#.#...#.#.#...#...#.#.#...#.#.#.#.......#...#.#.#.#.#.#...#...#...###...#...#",
"#####.#####.#.#.#####.#.###.#####.#.#.###.#.#.###.###.#####.#.#.#.###.#.#.#.#####.#.#.#.###.#.#.#.#########.#.#.#.#.#.#.###.#####.###########",
"#.....#...#.#...#...#...###.#...#.#.#.#...#...#...#...#.....#...#.#...#.#.#...#...#...#...#.#.#.#.#.....#...#.#.#.#.#.#.###.....#.........###",
"#.#####.#.#.#####.#.#######.#.#.#.#.#.#.#######.###.###.#########.#.###.#.###.#.#########.#.#.#.#.#.###.#.###.#.#.#.#.#.#######.#########.###",
"#...#...#.#.#.....#.###.....#.#.#.#.#.#.#...#...###...#.......###...###...###...###...#...#.#.#.#.#.###.#.###.#.#.#.#.#.......#...#.....#...#",
"###.#.###.#.#.#####.###.#####.#.#.#.#.#.#.#.#.#######.#######.#####################.#.#.###.#.#.#.#.###.#.###.#.#.#.#.#######.###.#.###.###.#",
"#...#...#.#.#.#...#.....#...#.#.#.#.#.#.#.#.#.#.......#.....#...................#...#...#...#.#.#.#.#...#...#.#.#.#.#...#...#.#...#...#...#.#",
"#.#####.#.#.#.#.#.#######.#.#.#.#.#.#.#.#.#.#.#.#######.###.###################.#.#######.###.#.#.#.#.#####.#.#.#.#.###.#.#.#.#.#####.###.#.#",
"#.......#...#...#.........#...#...#...#...#...#.........###.....................#.........###...#...#.......#...#...###...#...#.......###...#",
"#############################################################################################################################################" };

#endif

constexpr int MAP_HEIGHT = std::size(s_Map);
constexpr int MAP_WIDTH = std::size(s_Map[0]) - 1;