#include <stdio.h>
/**
 *main- display the largest prime factor of number
 *Return: 0
 */
int main(void)
{
int i, j, test, prime;
long n;
n = 612852475143;
prime = 1;
test = 1;
j = 2;
while (test)
{
i = ++prime;
/* test if i is prime number */
/* find a prime number*/
do {
if ((i % j) != 0)
j++;
else
/* if not a prime increment by 1*/
prime = i;
} while (j < i);
/* search of the largest factor prime*/
while ((n % prime) == 0)
{
n /= prime;
if (n == 1)
test = 0;
}
}
printf("%d\n", prime);
return (0);
}
