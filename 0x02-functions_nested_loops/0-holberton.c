#include"holberton.h"
/**
 * main - This program with only print holberton
 * Return: 0
 */
int main(void)
{
char str[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n', '\0'};
int i;
for (i = 0 ; i < 9 ; i++)
_putchar(str[i]);
_putchar('\n');
return (0);
}
