#include "main.h"
#include <stdlib.h>

/**
* *str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: pointer to new string or NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
char *str;
int i = 0, j = 0, k = 0, l = 0;

while (s1 != NULL && s1[k])
k++;
while (s2 != NULL && s2[l])
l++;

str = malloc(sizeof(char) * (k + l + 1));
if (str == NULL)
return (NULL);

while (i < k)
{
str[i] = s1[i];
i++;
}

while (i < (k + l))
{
str[i] = s2[j];
i++;
j++;
}
str[i] = '\0';

return (str);
}
