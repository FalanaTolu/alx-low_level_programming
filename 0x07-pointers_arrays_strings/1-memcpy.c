#include "main.h"

/**
* _memcpy -  copies bytes from one memory area to another
* @n: bytes to be copied
* @src: string where bytes are copied from
* @dest: string where bytes are copied to
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
