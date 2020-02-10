#include <stdio.h>
/**
 *main- main block
 *Return: 0
 */
int main(void)
{
int c, k, f, e;
for (c = 0; c <= 9; c++)
{
for (k = 0; k <= 9; k++)
{
for (f = 0; f <= 9; f++)
{
for (e = 0; e <= 9; e++)
{
putchar(c + 48);
putchar(k + 48);
putchar(32);
putchar(f + 48);
putchar(e + 48);
if (c == 9 && k == 8 && f == 9 && e == 9)
break;
if (f == 9 && e == 9 && k < 9)
{
f = c;
k++;
e = k;
}
else if (f == 9 && e == 9 && k == 9)
{
c++;
f = c;
k = 0;
e = k++;
}
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
}
