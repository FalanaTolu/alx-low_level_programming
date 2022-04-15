#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
int i = 0;
char *s, *sep = "";

va_list m;

va_start(m, format);

if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(m, int));
break;
case 'i':
printf("%s%d", sep, va_arg(m, int));
break;
case 'f':
printf("%s%f", sep, va_arg(m, double));
break;
case 's':
s = va_arg(m, char *);
if (!s)
s = "(nil)";
printf("%s%s", sep, s);
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}
}

printf("\n");
va_end(m);
}
