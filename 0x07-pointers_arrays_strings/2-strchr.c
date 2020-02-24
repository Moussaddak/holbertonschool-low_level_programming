#include <stdio.h>
/**
 *_strchr - locates a character in a string.
 *@s: input
 *@c: input
 *Return: string
 */
char *_strchr(char *s, char c)
{
<<
	int i = 0;
	char *r;

	r = NULL;
	while (*(s + i) != '\0')
	i++;
	for (; i >= 0; i--)
	{
		if (*(s + i) == c)
			r = s + i;
		}
		i++;
	}
	return (r);
}
