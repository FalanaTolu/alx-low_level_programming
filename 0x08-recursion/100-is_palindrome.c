#include "main.h"

/**
* palindrome_a - iteratively checks to see if a string is a palindrome or not
* @s: string to check
* @i: number used for iteration
* @len: length of the string
* Return: 1 if string is a palindrome, otherwise 0
*/

int palindrome_a(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (palindrome_a(s, i + 1, len - 1));
}

/**
* length_a - returns the length of a string
* @s: string whose length we are calculating
* Return: length of the string
*/

int length_a(char *s)
{
if (*s == '\0')
return (0);
return (1 + length_a(s + 1));
}

/**
* is_palindrome - checks to see if a string is a palindrome or no
* @s: string to check
* Return: 1 if string is a palindrome, otherwise 0
*/

int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (palindrome_a(s, 0, length_a(s)));
}
