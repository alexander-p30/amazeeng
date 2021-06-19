#include "maze.h"

struct Maze createMaze(size_t xSize, size_t ySize) {
  struct Maze maze;

  maze.xSize = xSize;
  maze.ySize = ySize;
  maze.matrix = allocateMatrix(xSize, ySize);

  return maze;
}

int** allocateMatrix(size_t xSize, size_t ySize) {
  int** matrix;
  int i = 0;

  matrix = calloc(ySize, sizeof(int*));
  for(i = 0; i < ySize; i++)
    matrix[i] = calloc(xSize, sizeof(int));

  return matrix;
}

