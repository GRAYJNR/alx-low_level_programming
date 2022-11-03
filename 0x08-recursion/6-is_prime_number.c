#include "main.h"
#include <stdio.h>

/**
* is_prime_number - checks if n is a prime number
* @n: int to check if it is prime or not
*
* Return: 1 if prime, 0 otherwise
*/

int is_prime_number(int n)
{
	if (n <= 1) /* edge case */
		return (0);
	return (prime_checker(n, _sqrt_recursion(n)));
}
