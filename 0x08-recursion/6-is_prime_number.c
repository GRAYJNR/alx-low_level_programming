#include "main.h"
#include <stdio.h>

/**
* is_prime_number - returns if a number is prime
* @n: number to determine primeness of
*
* Return: 1 if prime, 0 otherwise
*/

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime_number(n, 2));
}
