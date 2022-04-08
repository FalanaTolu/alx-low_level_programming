#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* is_digit - checks if the characters in a string are digits or not
* @s: string to be checked
* Return: 1 if digit, 0 otherwise
*/

int is_digit(char *s)
{
int i = 0;

while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}

/**
* _strlen - returns the length of a string
* @s: string to be measured
* Return: the length of the string
*/

int _strlen(char *s)
{

int i;
for (i = 0; s[i] != '\0'; i++)
{
;
}
return (i);
}

/**
* errors - checks for errors
*/

void errors(void)
{
printf("Error\n");
exit(98);
}

/**
* main - multiplies two positive numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: always 0 (Success)
*/

int main(int argc, char *argv[])
{
char *s1, *s2;
int l1, l2, l, *m, n1, n2, i, j, k = 0;

s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
l1 = _strlen(s1);
l2 = _strlen(s2);
l = l1 + l2 + 1;
m = malloc(sizeof(int) * l);
if (m == NULL)
return (1);
for (i = 0; i <= l1 + l2; i++)
m[i] = 0;
for (l1 = l1 - 1; l1 >= 0; l1--)
{
n1 = s1[l1] - '0';
j = 0;
for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
{
n2 = s2[l2] - '0';
j += m[l1 + l2 + 1] + (n1 *n2);
m[l1 + l2 + 1] = j % 10;
j /= 10;
}
if (j > 0)
m[l1 + l2 + 1] += j;
}
for (i = 0; i < l - 1; i++)
{
if (m[i])
k = 1;
if (k)
_putchar(m[i] + '0');
}
if (!k)
_putchar('0');
_putchar('\n');
free(m);
return (0);
}
