#include "main.h"
#include <stdio.h>

/**
* is_palindrome - checks if string is palindrome
* @s: string to check
*
* Return: 1 if palindrome, 0 otherwise
*/

int is_palindrome(char *s)
{
	char *end;
	int sLength;

	if (!*s) /* empty string */
		return (1);
	sLength = _strlen_recursion(s);
	end = (s + (sLength - 1)); /* set end to char before null byte */
	return (check_palindrome_recursive(s, end));
}
