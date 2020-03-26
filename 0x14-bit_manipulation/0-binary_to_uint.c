#include "holberton.h"
int _pow(int x, int y);
int _strlen(const char *s);
/**
 *binary_to_uint - n that converts a binary number to an unsigned int
 *@b: binary number
 *Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i, j = 0;
	unsigned int result = 0;

	if (!b)
	{
		return (0);
	}
	else
	{
		len = _strlen(b) - 1;
		for (i = len; i >= 0; i--, j++)
		{
			if (b[j] == '0' || b[j] == '1')
			{
				result += (b[j] - '0') * _pow(2, i);
			}
			else
			{
				return (0);
			}
		}
		return (result);
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
/**
 *_strlen - prints the length of a string
 *@s: input
 *Return: integer
 */
int _strlen(const char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
