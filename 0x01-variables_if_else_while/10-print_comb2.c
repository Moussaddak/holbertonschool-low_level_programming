#include <stdio.h>
/**
 *main- main block
 *Return: 0
 */
int main(void)
{
int c, k;
for (c = 0; c <= 9; c++)
{
for (k = 0; k <= 9; k++)
{
putchar(c + '0');
putchar(k + '0');
if (k == 9 && c == 9)
break;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
