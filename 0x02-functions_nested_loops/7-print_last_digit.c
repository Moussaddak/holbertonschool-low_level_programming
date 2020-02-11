#include "holberton.h"
/**
 * print_last_digit - display the last digit of a number
 * @n: value to be checked
 * Return: last digit
 */
int print_last_digit(int n)
{
int last_digit;
if (n >= 0)
last_digit = n % 10;
else
last_digit = -(n % 10);
_putchar(last_digit + '0');
return (last_digit);
_putchar('\n');
}
