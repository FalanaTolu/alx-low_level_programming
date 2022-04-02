#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: Always 0
*/

int main(int argc, char *argv[])
{
int mul, j;
j = 0;

if (argc != 3)
{
printf("Error\n");
j = 1;
}
else
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
}
return (j);
}
