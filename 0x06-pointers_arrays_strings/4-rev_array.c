/**
 *reverse_array - reverse elts of an array of integer
 *@a: input
 *@n: input
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
int i, alt;
for (i = 0; i < n / 2; i++)
{
alt = a[n - i - 1];
a[n - i - 1] = a [i];
a[i] = alt;
}
}
