#include "main.h"
#include <stdlib.h>

/**
* **alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: the number of columns of 2D array
* @height: the number of rows of 2D array
* Return: pointer to 2D array or NULL on failure
*/

int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (height <= 0 || width <= 0)
return (NULL);

grid = malloc(height * sizeof(int *));

if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
free(grid);
for (j = 0; j <= i; j++)
free(grid[j]);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
