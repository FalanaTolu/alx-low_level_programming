#include "main.h"
#include <stdlib.h>

/**
* *argstostr - concatenates all the arguments of a program
* @ac: total number of arguments in the program
* @av: arguments
* Return: pointer to new string
*/

char *argstostr(int ac, char **av)
{
char *s;
int i, j, k, l;
k = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
l++;
}

s = malloc(sizeof(char) * l);

if (s == NULL)
return (NULL);


for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
s[k] = av[i][j];
k++;
}
s[k] = '\n';
k++;
}

return (s);
}
