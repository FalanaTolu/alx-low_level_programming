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
int i, j, k, l, m;

i = 0;
j = 0;
while (*(n1 + i) != '\0')
i++;
while (*(n2 + j) != '\0')
j++;

if (i > size_r || j > size_r)
return (0);

i--;
j--;
size_r--;
l = 0;
for (k = 0; k < size_r; k++, i--, j--)
{
if (i >= 0)
l += *(n1 + i) - '0';
if (j >= 0)
l += *(n2 + j) - '0';
if (i < 0 && j < 0 && l == 0)
break;

*(r + k) = l % 10 + '0';
l /= 10;
}
*(r + k) = '\0';
if (i >= 0 || j >= 0 || l)
return (0);
for (k--, m = 0; k > m; k--, m++)
{
l = *(r + k);
*(r + k) = *(r + m);
*(r + m) = l;
}
return (r);
}
