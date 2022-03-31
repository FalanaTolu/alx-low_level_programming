#include "main.h"

/**
* prime_a - iteratively determine if a number is a prime number or not
* @n: number we want to determine is a prime number or not
* @i: number used for iteration
* Return: 1 if number is a prime number, otherwise return 0
*/

int prime_a(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (prime_a(n, i - 1));
}

/**
* is_prime_number - determine if a number is a prime number or not
* @n: number we want to determine is a prime number or not
* Return: 1 if number is a prime number, otherwise return 0
*/

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime_a(n, n - 1));
}
