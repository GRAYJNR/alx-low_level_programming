#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - printi the alphabets in reverse view type
 * Return: Always 0 (Success)
 */

int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le++)
		putchar(le);
		putchar('\n');
	return (0);
}
