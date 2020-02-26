# include "holberton.h"
/**
 *_puts_recursion - prints a string recursively
 *@s: input
 */
void _puts_recursion(char *s)
{
	char *r = s;

	if (*r == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*r);
	r++;
	_puts_recursion(r);
}
