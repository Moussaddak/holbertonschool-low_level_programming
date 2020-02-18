#include "holberton.h"
/**
 *puts2 - prints a string
 *@str: input
 */
void puts2(char *str)
{
char *p;
p = str;
do {
if (*p % 2 == 0)
_putchar(*str);
p++;
str++;
} while (*str != '\0');
_putchar('\n');
}
