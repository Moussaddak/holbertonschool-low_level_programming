#include "holberton.h"
/**
 *puts_half - prints the right half of a string
 *@str: input
 */
void puts_half(char *str)
{
char *p;
int len = 0, i;
p = str;
while (*p != '\0')
{
len++;
p++;
}
p = str + len / 2;
for (i = 0; *p != '\0'; i++)
{
_putchar(*p);
p++;
}
_putchar('\n');
}
