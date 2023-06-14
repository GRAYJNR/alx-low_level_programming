#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to @ dim. array
 */

int **alloc_grid(int width, int height)
{
	int **gray;
	int i, j;
	
	if (height <= 0 || width <= 0)
		return (NULL);

	gray = (int **) malloc(sizeof(int *) * height);

	if (gray == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		gray[i] = (int *) malloc(sizeof(int) * width);
		if (gray[i] == NULL)
		{
			free(gray);
			for (j = 0; j <= i; j++)
				free(gray[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			gray[i][j] = 0;
		}
	}
	return (gray);
}
