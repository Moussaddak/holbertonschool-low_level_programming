#include "holberton.h"
/**
 * print_alphabet_x10 - function print 10 times print alphabet a to z
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i = 0;
do {
char c = 'a';
do {
_putchar(c);
c++;
} while (c <= 'z');
i++;
_putchar('\n');
} while (i < 10);
}
