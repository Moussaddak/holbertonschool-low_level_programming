#include "holberton.h"
/**
 *puts2 - prints a string
 *@str: input
 */
void puts2(char *str)
{
char *s;
int i = 0;
s = str;
while (*s != '\0')
{
if (i % 2 == 0)
_putchar(*s);
i++;
s++;
}
_putchar('\n');
}

