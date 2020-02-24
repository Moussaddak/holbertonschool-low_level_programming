#include <stdio.h>
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: input
 *@accept: input
 *Return: string
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0, j = 0, br = 1, k;
char *r;
r = NULL;
	while (*(accept + j) != '\0')
	j++;

	while (*(s + i) != '\0' && br)
	{
		for (k = 0; k < j; k++)
		{
			if (*(s + i) == *(accept + k))
			{
				br = 0;
				r = s + i;
				break;
			}
		}
		i++;
	}
return (r);
}
