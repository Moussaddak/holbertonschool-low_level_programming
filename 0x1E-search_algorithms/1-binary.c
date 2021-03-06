#include "search_algos.h"
void print(int *array, size_t size);

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: size array
 * @value: target
 * Return: index where value is located, or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, midpoint;

	if (array && size)
	{
		left = 0;
		right = (int) size - 1;
		print(array + left, right - left + 1);
		while (left <= right)
		{
			midpoint = (left + right) / 2;
			if (value == midpoint)
				return (midpoint);
			else if (array[midpoint] < value)
				left = midpoint + 1;
			else
				right = midpoint - 1;
			print(array + left, right - left + 1);
		}
	}
	return (-1);
}
/**
 * print - prints an array
 * @array: array
 * @size: size
 */
void print(int *array, size_t size)
{
	int i;

	if (size)
	{
		printf("Searching in array: ");
		for (i = 0; i < (int)size; i++)
		{
			printf("%d", array[i]);
			if (i != (int)size - 1)
				printf(", ");
		}
		printf("\n");
	}
}
