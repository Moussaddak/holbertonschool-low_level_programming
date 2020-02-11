#include "holberton.h"
/**
 *_isalpha - test if a character is alphabetic char
 *@c: caracter that will be tested
 *Return: 0 if c is alphabetic char / 1 if not
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
_putchar('\n');
}
