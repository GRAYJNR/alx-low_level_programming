#include "main.h"
#include <stdio.h>

/**
* _sqrt_recursion - finds square root of n, recursively
* @n: int to find sqroot from
* 
* Return: sqroot, -1 if no natural sqroot for n
*/

int _sqrt_recursion(int n)
{
	if (n <= 0) /* error case */
		return (-1);
	return (_find_sqrt(1, n));
}
