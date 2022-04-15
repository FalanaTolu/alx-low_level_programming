#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - returns the sum of all its parameters
* @n: number of arguments passed to the function
* Return: sum of all function parameters
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int a = 0;
va_list m;

va_start(m, n);

for (i = 0; i < n; i++)
a += va_arg(m, int);

va_end(m);

return (a);
}
