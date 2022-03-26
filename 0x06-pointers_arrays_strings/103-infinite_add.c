#include "main.h"

/**
* infinite_add - adds two numbers
* @n1: first number to be added
* @n2: second number to be added
* @r: buffer that the function will use to store the result.
* @size_r: buffer size:
* Return: pointer to the result or 0
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, g, l, m1, m2;

i = 0;
j = 0;
while (*(n1 + i) != '\0')
i++;
while (*(n2 + j) != '\0')
j++;

if (i >= j)
k = i;
else
k = j;
if (size_r <= k + 1)
return (0);

*(r + k + 1) = '\0';

i--;
j--;
size_r--;
m1 = *(n1 + i) - 48;
m2 = *(n2 + j) - 48;

while (k >= 0)
{
l = m1 + m2 + g;
if (l >= 10)
g = l / 10;
else
g = 0;
if (l > 0)
*(r + k) = (l % 10) + 48;
else
*(r + k) = '0';
if (i > 0)
i--, m1 = *(n1 + i) - 48;
else
m1 = 0;
if (j > 0)
j--, m2 = *(n2 + j) - 48;
else
m2 = 0;
k--, size_r--;
}
if (*(r) == '0')
return (r + 1);
else
return (r);
}
