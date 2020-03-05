#include <stdlib.h>
/**
 *array_range - creates an array of integers
 *@max: input
 *@min: input
 *Return: pointer of integer
 */
int *array_range(int min, int max)
{
int i, j = 0, diff;
int *p;
	if (min > max)
	{
		return (NULL);
	}
	diff = max - min + 1;
	p = malloc(sizeof(int) * diff);
	if (p == NULL)
	{
		return (p);
	}
	else
	{
		for (i = min; i <= max; i++)
		{
			*(p + j) = i;
			j++;
		}
	}
	return (p);
}
