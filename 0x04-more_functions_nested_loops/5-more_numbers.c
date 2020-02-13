#include "holberton.h"
/**
 *more_numbers- prints the numbers from 0 to 9, ten times
 *Return: always 0
 */
void more_numbers(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
_putchar((i / 10) + 48);
_putchar((i % 10) + 48);
}
_putchar('\n');
}
}
