#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: string to be added to
* @src: string to be added and is  of at most n bytes
* @n: number of bytes contained in src string
* Return: pointer to concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (*(dest + i) != '\0')
{
i++;
}
while (*(src + j) != '\0' &&  j < n)
{
*(dest + i) = *(src + j);
i++;
j++;
}

*(dest + i) = '\0';

return (dest);
}
