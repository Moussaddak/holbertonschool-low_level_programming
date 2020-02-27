#include <stdio.h>
/**
 *_quotion - test is prime
 *@n: input
 *@i: input
 *Return: integer
 */
int _quotion(int n, int i)
{
if (n < i)
	return (0);
if ((n % i) == 0)
	return (1 + _quotion(n, i + 1));
return (0 + _quotion(n, i + 1));
}
/**
 *is_prime_number - return if integer is a prime number or not
 *@n: input
 *Return: integer
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (_quotion(n, 1) == 2)
		return (1);
	else
		return (0);
}
