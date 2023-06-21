#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - this iterates over an array and performs an action
* @array: represents array to iterate through
* @size: this represents number of elements of array
* @action: represents action (function) to perform on array elements
*
* Return: always void or nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j = 0;

	if (array == NULL || action == NULL)
		return;
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
