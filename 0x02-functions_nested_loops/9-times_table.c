#include "holberton.h"
/**
 *times_table - prints the 9 times table, starting with 0
 *Return: 0
 */
void times_table(void)
{
int i, j, k, n;
for (i = 0; i <= 9; i++)
{
k = 1;
_putchar('0');
for (j = 0; j < 9; j++)
{
n = i * k;
if (n <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(n + '0');
}
else 
{
_putchar(',');
_putchar(' ');
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
if (j == 8)
_putchar('\n');
k++;
}
}
}
