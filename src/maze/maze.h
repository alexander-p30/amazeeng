#ifndef MAZE_H
#define MAZE_H

#include <stdio.h>
#include <stdlib.h>

#define PATH 0
#define WALL 1

struct Maze {
  size_t xSize;
  size_t ySize;
  int** matrix;
};

struct Maze createMaze(size_t xSize, size_t ySize);

int** allocateMatrix(size_t xSize, size_t ySize);

#endif

