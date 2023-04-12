#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - will create 2d array using height and width
* @height:the number of rows
* @width: number of columns
* Return: pointer to array
*/
int **alloc_grid(int width, int height)
{
int **arr;
int i;
int j;
if (width <= 0 || height <= 0)
return (NULL);
arr = (int **) malloc(height * sizeof(int *));
if (arr == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
arr[i] = (int *) malloc(width * sizeof(int));
if (arr[i] == NULL)
return (NULL);
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
