#include "main.h"
#include <stdlib.h>

/**
* *create_array - creates an array of chars, and initializes it
* with a specific char
* @size: the size of the array
* @c: character which initializes array
* Return: pointer to the array, or NULL if it fails or if size = 0
*/

char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i = 0;

if (size == 0)
return (NULL);

s = (char *) malloc(sizeof(char) * size);

if (s == NULL)
return (0);

for (i = 0; i < size; i++)

*(s + i) = c;

*(s + i) = '\0';

return (s);
}
