#include <stdio.h>
/**
 *main- main block
 *Return: 0
 */
int main(void)
{
int c, k, f;
for (c = 0; c < 8; c++)
{
for (k = c + 1; k < 9; k++)
{
for (f = k + 1; f <= 9; f++)
{
putchar(c + 48);
putchar(k + 48);
putchar(f + 48);
if (c == 7 && k == 8 && f == 9)
break;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
