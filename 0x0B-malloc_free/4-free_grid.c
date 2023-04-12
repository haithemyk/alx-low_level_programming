#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - will free 2d array
* @grid:the 2d array
* @height: number of rows
* Return: pointer to array
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
