#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds positive numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 if no number is passed to the program,
* 1 if one of the number contains symbols that are not digits,
* otherwise returns the result
*/

int main(int argc, char *argv[])
{
int add, i, j, k;
add = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
{
printf("Error\n");
return (1);
}
}
}
for (k = 1; k < argc; k++)
{
j = atoi(argv[k]);
if (j >= 0)
add += j;
}
printf("%d\n", add);
return (0);
}
