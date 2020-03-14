#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 *sum_them_all - calculate the sum of all given args
 *@n: number of args
 *Return: return sum of numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	if (n != 0)
	{
		va_list  ap;

		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, int);
		}

		va_end(ap);

		return (sum);
	}
	else
	{
		return (0);
	}
}
