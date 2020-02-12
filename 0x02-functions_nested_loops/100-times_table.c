#include "holberton.h"
/**
 *times_table - prints the n times table, starting with 0
 *@n: input
 *Return: 0
 */
void times_table(int n)
{
int i, j, k, q;
if (n < 15 && n > 0)
{
for (i = 0; i <= n; i++)
{
k = 1;
_putchar('0');
for (j = 0; j < n; j++)
{
q = i * k;
if (q <= n)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(q + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((q / 10) + '0');
_putchar((q % 10) + '0');
}
k++;
}
_putchar('\n');
}
}
}
