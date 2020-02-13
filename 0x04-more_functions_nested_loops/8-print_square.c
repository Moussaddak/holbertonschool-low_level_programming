#include "holberton.h"
/**
 *print_square- draws a square on the terminal
 *@size: input
 *Return: always 0
 */
void print_square(int size)
{
int i, j, k, nb_sq;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
nb_sq = j + 1;
for (k = 0; k < nb_sq ; k++)
{
while (--nb_sq)
_putchar('#');
_putchar('\n');
}
}
}
}
else
_putchar('\n');
}
