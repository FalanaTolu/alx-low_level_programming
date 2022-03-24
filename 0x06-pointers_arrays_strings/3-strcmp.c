#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first string to be compared
* @s2: second string to be compared
* Return: 0 if s1 and s2 are equal, negative value if s1 is less than s2
* and positive if s1 is greater than s2
*/

int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;
int k = 0;

while (*(s1 + i) != '\0')
{
s1++;
j++;
}

while  (*(s2 + i) != '\0')
{
s2++;
k++;
}

if (j == k)
{
return (0);
}
else if (j < k)
{
return (-15);
}
else
{
return (15);
}
}
