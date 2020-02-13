#include "holberton.h"
/**
 *print_triangle- draws a triangle on the terminal
 *@size: input
 *Return: always 0
 */
void print_triangle(int size)
{
int i, j;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 0; j < size; j++)
{
if (j < size - i)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
