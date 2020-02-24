#include <stdio.h>
/**
 *_strchr - locates a character in a string.
 *@s: input
 *@c: input
 *Return: string
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0, br = 1;
	char *r;

	r = NULL;

	while (*(s + i) != '\0' && br)
	{
		if (*(s + i) == c)
		{
			r = s + i;
			br = 0;
		}
		i++;
	}
	return (r);
}
