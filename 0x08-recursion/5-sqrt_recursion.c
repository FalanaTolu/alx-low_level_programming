#include "main.h"

/**
* _sqrt_a - returns the natural square root of a number iteratively
* @n: number whose square root we are calculating
* @i: number used for iteration
* Return: the square root of the number or -1 if number
* does not have a natural square root
*/

int _sqrt_a(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt_a(n, i + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number whose square root we are calculating
* Return: the square root of the number or -1 if number
* does not have a natural square root
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_a(n, 0));
}
