#include "main.h"
#include <stdio.h>

/**
* _strchr - returns a pointer to the first occurrence of a character
* in a string, or NULL if the character is not found
* @c: character to search for
* @s: string to search from
* Return: pointer to the first occurrence of the character or NULL
* if the character is not found
*/

char *_strchr(char *s, char c)
{
int i;

for (;;)
{
i = *s++;
if (i == c)
{
return (s - 1);
}
if (i == 0)
{
return (NULL);
}
}
}
