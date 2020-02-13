#include "holberton.h"
/**
 *print_diagonal- draws a diagonal line on the terminal
 *@n: input
 *Return: always 0
 */
void print_diagonal(int n)
{
int i, j, space;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= n; j++)
{
if (i == j)
{
space = j;
while (--space)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
}
}
else
_putchar('\n');
}
