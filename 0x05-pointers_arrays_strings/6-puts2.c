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
do {
if (i % 2 == 0)
_putchar(*s);
i++;
s++;
} while (*s != '\0');
_putchar('\n');
}

