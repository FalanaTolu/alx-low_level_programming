#include "main.h"

/**
* flip_bits - returns the number of bits you would need to flip to get
* from one number to another
* @n: first binary number
* @m: second binary number
* Return:  number of bits needed to flip n to m
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int i;
unsigned long int j = n ^ m;

for (i = 0; j > 0;)
{
if (j & 1)
i++;
j = j >> 1;
}

return (i);
}
