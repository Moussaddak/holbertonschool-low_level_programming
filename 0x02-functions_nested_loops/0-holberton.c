#include"holberton.h"
#include <string.h>
/**
 * main - This program with only print holberton
 * Return: 0
 */
int main(void)
{
char str[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
int i, len;
len = strlen(str);
for (i = 0 ; i < len - 1; i++)
_putchar(str[i]);
_putchar('\n');
return (0);
}
