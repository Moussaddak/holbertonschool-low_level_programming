#include <stdlib.h>
/**
 *alloc_grid -  two dimensional grid
 *@width: input
 *@height: input
 *Return: integer
 */
int **alloc_grid(int width, int height)
{
int matrix, i, j;

	if ((width * height) <= 0 || height < 0 || width < 0)
	{
		return (NULL);
	}
	matrix = malloc(width * height * sizeof(int));
	if (matrix == NULL)
	{
		return (matrix);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				*(*(matrix + i) + j) = 0;
			}
		}
		return (matrix);
	}
}
