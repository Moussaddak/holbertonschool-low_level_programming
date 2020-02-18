#include <stdio.h>
/**
 *print_array - prints n elements of an array of integers
 *@a: input
 *@n: input
 */
void print_array(int *a, int n)
{
int i;
for (i = 1; i <= n; i++)
{
if (i != n)
printf("%d, ", *a);
else
printf("%d\n", *a);
a++;
}
}
