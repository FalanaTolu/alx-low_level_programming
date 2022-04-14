#include "3-calc.h"

/**
* main - performs the operation asked by the user
* @argc: number of arguments
* @argv: array of arguments
* Return: always 0
*/

int main(int argc, char *argv[])
{
int i, j, ans;
char c;
int (*calc)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

i = atoi(argv[1]);
j = atoi(argv[3]);

calc = get_op_func(argv[2]);

if (!calc)
{
printf("Error\n");
exit(99);
}

c = *argv[2];

if ((c == '/' || c == '%') && j == 0)
{
printf("Error\n");
exit(100);
}

ans = calc(i, j);

printf("%d\n", ans);

return (0);
}
