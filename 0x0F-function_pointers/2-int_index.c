#include <stdlib.h>
/**
 *int_index - function that searches for an integer.
 *@cmp: pointer to function
 *@size: input type int
 *@array: pointer to array
 *Return: return integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, flag = 1;

	if (size <= 0)
	{
		return (-1);
	}
	else if (array != NULL && cmp != NULL)
	{
		while (i < size && flag)
		{
			if ((*cmp)(array[i]))
			{
				flag = 0;
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
