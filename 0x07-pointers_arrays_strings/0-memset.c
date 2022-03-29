#include "main.h"

/**
* _memset - fills a memory area pointed to with the a constant byte
* @n: size of part of memory area to be filled
* @s: the memory area
* @b: a constant byte
* Return: pointer to the memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
