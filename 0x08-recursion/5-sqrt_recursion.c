/**
 *_sqrt - calcul natural square root of a number
 *@n: input
 *@i: input
 *Return: square root
 */
int _sqrt(int n, int i)
{
	if (i > n / 2)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: input
 *Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (1);
	else
		return (_sqrt(n, 1));
}
