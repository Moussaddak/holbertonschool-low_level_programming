#include "search_algos.h"
/**
 * linear_search - searches for a value in array using the Linear search algo
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	int index;
	int current;

	if (array)
	{
		for (index = 0; index < (int)size; index++)
		{
			current = array[index];
			printf("Value checked array[%d] = [%d]\n", index,
			       current);
			if (current == value)
				return (index);
		}
	}
	return (-1);
}
