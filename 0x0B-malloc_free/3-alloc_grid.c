#include <stdlib.h>
#include <stdio.h>
/**
 *alloc_grid -  two dimensional grid
 *@width: input
 *@height: input
 *Return: integer
 */
int **alloc_grid(int width, int height)
{
int **matrix, i = 0, j, k;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}
	while (i < height)
	{
		*(matrix + i) = malloc(width * sizeof(int));
		if ((matrix + i) == NULL)
		{
			free(matrix);
			return (NULL);
		}
		i++;
	}
	for (k = 0; k < height; k++)
	{
		for (j = 0; j < width; j++)
		{
			*(*(matrix + k) + j) = 0;
		}
	}
	return (matrix);
}
