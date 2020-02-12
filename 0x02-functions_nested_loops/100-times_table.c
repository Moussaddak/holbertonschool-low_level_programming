#include "holberton.h"
/**
 *print_times_table - prints the n times table, starting with 0
 *@n: input
 *Return: 0
 */
void print_times_table(int n)
{
int i, j, k, q;
if (n < 15 && n >= 0)
{
for (i = 0; i <= n; i++)
{
k = 1;
_putchar('0');
for (j = 0; j < n; j++)
{
q = i * k;
if (q <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(q + '0');
}
else if (q > 9 && q <= 99)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((q / 10) + '0');
_putchar((q % 10) + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((q / 100) + '0');
_putchar(((q % 100) / 10) + '0');
_putchar((q % 10) + '0');
}
k++;
}
_putchar('\n');
}
}
}
