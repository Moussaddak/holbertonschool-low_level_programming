#include <stdio.h>
/**
 *main- main block
 *Return: 0
 */
int main(void)
{
int c;
for (c = 97; c <= 122; c++)
{
if (c != 'q' && c != 'e')
putchar(c);
}
putchar('\n');
return (0);
}
