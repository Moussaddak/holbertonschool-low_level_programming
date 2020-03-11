#include <stdlib.h>
/**
 *array_iterator - function that prints each element of an array.
 *@action: pointer to function
 *@size: input type struct
 *@array: pointer to array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(*(array + i));
		}
	}
}
