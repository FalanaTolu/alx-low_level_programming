#include "main.h"

/**
* puts2 - prints every other character of a string, starting with
* the first character, followed by a new line
* @str: string where characters are printed from
*/

void puts2(char *str)
{
int i, k;

i = 0;

while (*(str + i) != '\0')
{
i++;
}

for (k = 0; k < i; k += 2)
{
_putchar(*(str + k));
}

_putchar('\n');
}
