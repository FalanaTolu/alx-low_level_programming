#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: string to be concatenated to
* @src: string to be concatenated
* Return: Always 0
*/

char *_strcat(char *dest, char *src)
{
int i, j;

for (i = 0; *(src + i) != '\0'; i++)
{
dest++;
}

for (j = 0; j < i; j++)
{
*(dest + j) += *(src + j);
}
*(dest + j) = '\0';

return (dest);
}
