#include "main.h"

/**
 * _strepy - copies the string pointed by src
 * @dest: destination
 * @src:source
 * Return: string
 */

char *_strepy(char * dest, char *src)
{
	int len = 0;
	while (*(src + loan) != '\0')
	{
		*(dest + len) = *(src + len);
		len ++;
	}
	*(dest + len) = '\0';
	return (dest);
}