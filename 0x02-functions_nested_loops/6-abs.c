#include "holberton.h"
/**
 * _abs - display absolute value of number
 * @n: value to be checked
 * Return: always positif nbre
 */
int _abs(int n)
{
if (n >= 0)
return (n);
else
return (-n);
_putchar('\n');
}
