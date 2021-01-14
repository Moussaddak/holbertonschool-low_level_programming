#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: size array
 * @value: search key
 * Return: index where value is located, or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	int index, step, next;

	if (array && size)
	{
		/* initialize variables */
		step = sqrt(size);
		index = 0;
		next = 0;
		/* Jump until it find subset containing value */
		while (array[index] < value)
		{
			printf("Value checked array[%d] = [%d]\n", index,
			       array[index]);
			next = next + step;
			index = next;
			if (index >= (int) size)
				break;
		}
		/* perform linear search */
		index = index - step;
		printf("Value found between indexes [%d] and [%d]\n", index,
		       next);
		while (array[index] < value)
		{
			printf("Value checked array[%d] = [%d]\n", index,
			       array[index]);
			index++;
			if (index >= (int) size)
				return (-1);
		}
		/* return index of value */
		if (array[index] == value)
		{
			printf("Value checked array[%d] = [%d]\n", index,
			       array[index]);
			return (index);
		}
	}
	return (-1);
}
