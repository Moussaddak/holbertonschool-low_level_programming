#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: input
 * @m: input
 * Return: number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nb = 0;
	unsigned long int r;

	r = n ^ m;

	while (r > 0)
	{
		if (r & 1)
		{
			nb++;
		}

		r >>= 1;
	}

	return (nb);
}
