#include "holberton.h"
#define MAX (sizeof(unsigned long int) * 8)
int _pow(int x, int y);
/**
 * get_bit - returns the value of a bit at a given index
 * @n: input integer
 * @index: given index
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int result;

	if (index > MAX)
	{
		return (-1);
	}
	else
	{
		index = _pow(2, index);

		result = index & n;

		if (result == index)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
/**
 *_pow - returns the value of x raised to the power of y
 *@x: input
 *@y: input
 *Return: integer
 */
int _pow(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow(x, y - 1));
}
