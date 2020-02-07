#include <stdio.h>
/**
 *main- main block
 *Return: 0
 */
int main(void)
{
int c, k, f, x, y, z;
for (c = 0; c < 8; c++)
{
for (k = c + 1; k < 9; k++)
{
for (f = c + 2; f <= 9; f++)
{
x = c;
y = k;
z = f;
if (c == x && k == z && f == y)
f++;
else if (c == y && k == x && f == z)
f++;
else if (c == z && k == x && f == y)
f++;
else if (c == y && k == z && f == x)
f++;
else if (c == z && k == y && f == x)
f++;
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
