#include "function_pointers.h"

/**
* int_index -this  gets the index of an array element
* @array: represents array to search through
* @size: this represents size of array (num of elements)
* @cmp: this is the comparison function to determine if element found
*
* Return: this is an integer that represents index of element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
