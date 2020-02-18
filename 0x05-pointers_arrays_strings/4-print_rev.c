#include "holberton.h"
/**
 *print_rev - prints a string in reverse
 *@s: input
 */
void print_rev(char *s)
{
int i, len = 0;
char *sc;
sc = s;
while (*sc != '\0')
{
sc++;
len++;
}
for (i = len - 1; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
