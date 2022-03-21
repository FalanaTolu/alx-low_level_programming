#include "main.h"

/**
* _strlen - returns the length of a string
* @s: string with unknown length
* Return: length of string
*/

int _strlen(char *s)
{

int i, j;
for (i = 0; s[i] != '\0'; i++)
{
if (s[0] == '\0')
j = 0;
else
j = i + 1;
}
return (j);
}
