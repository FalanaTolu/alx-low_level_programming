#include "main.h"
#include <stdlib.h>

/**
* _mem - fills memory with something
* @s: memory area to be filled
* @b: what to fill memory area with
* @n: how many times to fill memory area
* Return: pointer to the memory area
*/

char *_mem(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;

return (s);
}

/**
* *_calloc - allocates memory for an array
* @nmemb: number of members of the array
* @size: size of each member
* Return: pointer to allocated memory or NULL on failure
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(size * nmemb);

if (ptr == NULL)
return (NULL);

_mem(ptr, 0, nmemb * size);

return (ptr);
}
