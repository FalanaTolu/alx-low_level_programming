#include "main.h"
#include <stdlib.h>

/**
* *string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: space allocated in memory for second string
* Return: newly concatenated string or NULL on failure
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i = 0, j = 0, k = 0, l = 0;

for (i = 0; s1 && s1[i]; i++)
;
for (j = 0; s2 && s2[j]; j++)
;

if (n < j)
s = malloc(sizeof(char) * (i + n + 1));
else
s = malloc(sizeof(char) * (i + j + 1));

if (s == NULL)
return (NULL);

while (k < i)
{
s[k] = s1[k];
k++;
}

while (n < j && k < (i + n))
s[k++] = s2[l++];

while (n >= j && k < (i + j))
s[k++] = s2[l++];

s[k] = '\0';

return (s);
}
