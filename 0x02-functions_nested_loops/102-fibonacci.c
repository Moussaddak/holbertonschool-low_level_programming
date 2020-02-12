#include <stdio.h>
/**
 *main - print the first 50 fibonacci number
 *Return: always 0
 */
int main(void)
{
int p1 = 0, p2 = 1, i, next;
for (i = 1; i <= 50; i++)
{
if (i != 50)
printf("%d, ", p2);
else
printf("%d", p2);
next = p1 + p2;
p1 = p2;
p2 = next;
}
return (0);
}
