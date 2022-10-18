#include <stdio.h>

/**
 * main - print lower & upper case alphabets
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	for (ch = 'A'; ch <= 'z'; ch++)
		putchar(ch);
	return (0);
}
