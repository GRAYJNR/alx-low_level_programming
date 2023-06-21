#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_name - this prints a name which is given a function
* @name: represents a pointer to name to print
* @f: this represents function to print name
*
* Return: this is always void or nothing
*/

void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
