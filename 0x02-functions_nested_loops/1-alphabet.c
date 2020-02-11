#include "holberton.h"
/**
 * print_alphabet - function that print lowercase alphabet
 *@c: character to be printed
 * Return: Always 0.
 */
void print_alphabet(void)
{
int i;
char c;
for (i = 97 ; i <= 122 ; i++)
{
c = i;
_putchar(c);
}
_putchar('\n');
}
