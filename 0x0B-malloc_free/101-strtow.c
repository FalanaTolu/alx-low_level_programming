#include "main.h"
#include <stdlib.h>

/**
* word_count - counts number of words in a string
* @s: string to be counted
* Return: number of words
*/

int word_count(char *s)
{
int i, j, w;

i = 0;
w = 0;

for (j = 0; s[j] != '\0'; j++)
{
if (s[j] == ' ')
i = 0;
else if (i == 0)
{
i = 1;
w++;
}
}

return (w);
}

/**
* **strtow - splits a string into words
* @str: string to split
* Return: pointer to an array of strings or NULL on failure
*/

char **strtow(char *str)
{
char **s, *s1;
int j, k = 0, l = 0, w, c = 0, aa, ab;

while (str[l])
l++;
w = word_count(str);
if (w == 0)
return (NULL);

s = (char **) malloc(sizeof(char *) * (w + 1));
if (s == NULL)
return (NULL);

for (j = 0; j <= l; j++)
{
if (str[j] == ' ' || str[j] == '\0')
{
if (c)
{
ab = j;
s1 = (char *) malloc(sizeof(char) * (c + 1));
if (s1 == NULL)
return (NULL);
while (aa < ab)
*s1++ = str[aa++];
*s1 = '\0';
s[k] = s1 - c;
k++;
c = 0;
}
}
else if (c++ == 0)
aa = j;
}
s[k] = NULL;
return (s);
}
