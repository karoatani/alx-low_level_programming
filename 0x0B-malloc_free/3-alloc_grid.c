#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **height_1;
	int i, j;

	if (width == 0 | height == 0 | width < 0 | height < 0)
		return (NULL);

	height_1 = malloc(sizeof(int) * height);

	for (i = 0; i < height; i++)
	{
		height_1[i] = malloc(sizeof(int) * width);
		if (height_1[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(height_1[i]);
			}
			free(height_1);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
		{
			height_1[j][i] = 0;
		}
	}
	return (height_1);
}
