#include "holberton.h"
#define ABS(x) ((x) < (0) ? (-(x)) : (x))
int _pow(int x, int y);
/**
 *print_number - print an integer
 *@n: input integer argument
 */
void print_number(int n)
{
	int div = 1, i = 1, j, n_i;
	double h = n;

	if (h < 0)
	{
		_putchar('-');
		h = ABS(h);
	}
	if (h >= 0 && h <= 9)
	{
		_putchar(h + '0');
	}
	else
	{
		for (; h / div >= 10; div *= 10)
		{
			i++;
		}
		n_i = i - 2;
		_putchar((h / _pow(10, i - 1)) + '0');
		for (j = n_i; j >= 1; j--)
		{
			_putchar(((h / _pow(10, j)) % 10) + '0');
		}
		_putchar((h % 10) + '0');
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
