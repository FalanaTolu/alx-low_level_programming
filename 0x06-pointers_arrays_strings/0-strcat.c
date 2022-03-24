#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: string to be concatenated to
* @src: string to be concatenated
* Return: pointer to concatenated string
*/

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

while (*(dest + i) != '\0')
{
i++;
}

while (*(src + j) != '\0')
{
*(dest + i) = *(src + j);
i++;
j++;
}
*(dest + i) = '\0';

return (dest);
}
