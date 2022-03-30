#include "main.h"

/**
* _pow_recursion - returns the value of a number x raised
* to the power of a number y
* @x: number to be raised
* @y: the power number is being raised to
* Return: the result of raising number to said power
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
