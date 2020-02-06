#include <stdio.h>
/**
 *main- main block
 *Return: 0
 */
int main(void)
{
int c;
for (c = 48; c <= 57; c++)
{
putchar(c);
if (c != 57)
putchar(',');
else
putchar('$');
putchar(' ');
}
return (0);
}
