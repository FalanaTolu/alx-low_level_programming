#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - prints numbers, followed by a new line
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list m;

va_start(m, n);

for (i = 0; i < n; i++)
{
if (!separator)
printf("%d", va_arg(m, int));
else if (separator && i == 0)
printf("%d", va_arg(m, int));
else
printf("%s%d", separator, va_arg(m, int));
}

va_end(m);

printf("\n");
}
