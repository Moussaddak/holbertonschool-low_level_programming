#include"holberton.h"
#include <string.h>
/**
 * main - This program with only print holberton
 * Return: 0
 */
int main(void)
{
char str[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n', '\0'};
int i, len;
len = strlen(str);
for (i = 0 ; i < len ; i++)
_putchar(str[i]);
_putchar('\n');
return (0);
}
