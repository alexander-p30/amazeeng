#include "io_utils.h"

void printMaze(struct Maze maze) {
  int i = 0, j = 0;

  for(i = 0; i < maze.ySize; i++) {
    for(j = 0; j < maze.xSize; j++) {
      printf(coloredMazeCell(maze.matrix[i][j]));
    }
    printf("\n");
  }

  return;
}

char* coloredMazeCell(int cellValue) {
  char* coloredCell;

  switch(cellValue) {
    case WALL:
      coloredCell = BLUE_ONE_STRING;
      break;
    case PATH:
      coloredCell = GREEN_ZERO_STRING;
      break;
  }

  return coloredCell;
}

