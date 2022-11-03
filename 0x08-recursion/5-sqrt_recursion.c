#include "main.h"

/**
* _find_sqrt - finds square root recursively, needs prev param
* @prev: previous result of function
* @find: constant int to find sq root for
*
* Return: square root of find, or -1 if not found
*/

int _find_sqrt(int prev, int find)
{
	if (prev > find) /* didn't find a nr, there was remainder */
		return (-1);
	if (prev * prev == find) /* natural root found */
		return (prev);
	return (_find_sqrt(prev + 1, find)); /* not super efficient */
}
