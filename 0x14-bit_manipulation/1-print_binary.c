#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: number to be represented in binary
*/

void print_binary(unsigned long int n)
{
int i;
int j = 0;
unsigned long int k;

for (i = 63; i >= 0; i--)
{
k = n >> i;

if (k & 1)
{
_putchar('1');
j++;
}
else if (j)
_putchar('0');
}
if (!j)
_putchar('0');
}
