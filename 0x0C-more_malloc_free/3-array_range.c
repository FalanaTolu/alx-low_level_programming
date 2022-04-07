#include "main.h"
#include <stdlib.h>

/**
* *array_range - creates an array of integers
* @min: lowest number
* @max: highest number
* Return: pointer to the newly created array of ordered numbers
* or NULL on failure
*/

int *array_range(int min, int max)
{
int *ptr, i, j;

if (min > max)
return (NULL);

j = max - min + 1;

ptr = malloc(sizeof(int) * j);

if (ptr == NULL)
return (NULL);

for (i = 0; min <= max; i++)
ptr[i] = min++;

return (ptr);
}
