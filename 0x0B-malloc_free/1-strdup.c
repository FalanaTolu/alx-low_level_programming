#include "main.h"
#include <stdlib.h>

/**
* *_strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter
* @str: string to copy
* Return: pointer to new string
*/

char *_strdup(char *str)
{
int i;
char *s;

if (str == NULL)
return (NULL);

i = 0;
while (str[i])
i++;
s = malloc(sizeof(char) * (i + 1));

if (s == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
s[i] = str[i];
s[i] = '\0';
return (s);
}
