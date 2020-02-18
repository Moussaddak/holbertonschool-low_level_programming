#include "holberton.h"
/**
 *puts2 - prints a string
 *@str: input
 */
void puts2(char *str)
{
int i = 0;
do {
if (i % 2 == 0)
_putchar(*str);
i++;
str++;
} while (*str != '\0');
_putchar('\n');
}
