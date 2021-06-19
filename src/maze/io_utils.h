#ifndef MAZE_IO_UTILS_H
#define MAZE_IO_UTILS_H

#include <stdio.h>
#include "maze.h"

#define BLUE_ONE_STRING "\e[1;31m1  \e[0m"
#define GREEN_ZERO_STRING "\e[1;32m0  \e[0m"

void printMaze(struct Maze maze);

char* coloredMazeCell(int cellValue);

#endif

