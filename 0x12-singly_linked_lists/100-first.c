#include <stdio.h>

void tortue(void) __attribute__ ((constructor));

/**
* tortue - prints a sentence before the main function is executed
*/

void tortue(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
