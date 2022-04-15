#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - prints strings, followed by a new line
* @separator: string to be printed between the strings
* @n: number of strings passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s;

va_list m;

va_start(m, n);

for (i = 0; i < n; i++)
{
s = va_arg(m, char *);
if (!s)
s = "(nil)";
if (!separator)
printf("%s", s);
else if (separator && i == 0)
printf("%s", s);
else
printf("%s%s", separator, s);
}

printf("\n");

va_end(m);
}
