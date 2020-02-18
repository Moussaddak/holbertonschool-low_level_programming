#include "holberton.h"
/**
 *_puts - prints a string
 *@str: input
 */
void _puts(char *str)
{
char *s;
s = str;
while (*s != '\0')
{
_putchar(*s);
s++;
}
_putchar('\n');
}
