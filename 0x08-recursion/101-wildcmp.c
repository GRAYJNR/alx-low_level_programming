#include "main.h"
#include <stdio.h>

int recursive_check(char *s1, char *s2, int wildC);

/**
* wildcmp - compares two strings, supports wildcard '*'
* @s1: string 1 to compare to s2
* @s2: string 2 to compare to s1
*
* Return: 1 if identical, 0 otherwise, -1 for error
*/

int wildcmp(char *s1, char *s2)
{
		return (recursive_check(s1, s2, 0));
}
