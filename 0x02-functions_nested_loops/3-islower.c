#include "holberton.h"
/**
 *_islower - test if a character is lowercase
 *@c: caracter that will be tested
 *Return: 0 if c is lowercase / 1 if not
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
_putchar('\n');
}
