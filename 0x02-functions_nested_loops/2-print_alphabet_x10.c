#include "holberton.h"
/**
 * print_alphabet_x10 - function print 10 times print_alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i = 0;
do {
print_alphabet();
i++;
} while (i > 9);
}
