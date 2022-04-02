#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - prints the minimum number of coins to make change
* for an amount of money
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on success, 1 on failure
*/

int main(int argc, char *argv[])
{
int i, j, min;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}

i = atoi(argv[1]);
min = 0;

if (i < 0)
{
printf("0\n");
return (0);
}

for (j = 0; j < 5 && i >= 0; j++)
{
while (i >= coins[j])
{
min++;
i -= coins[j];
}
}

printf("%d\n", min);
return (0);
}
