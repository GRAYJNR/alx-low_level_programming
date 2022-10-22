#include "main.h"

/**
 * times_table - print the 9 times table
 */

void times_table(void)
{
	int num;
	int multi;
	int prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(',');
		_putchar(' ');

		prod = (num * multi);

		if (prod <= 9)
			_putchar(',');
		else
			_putchar((prod / 10) + '0');
	}
}
