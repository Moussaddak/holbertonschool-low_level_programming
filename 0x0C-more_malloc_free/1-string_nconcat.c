#include <stdlib.h>
/**
 *string_nconcat -func that concatenates two strings
 *@s1: input
 *@s2: input
 *@n: input
 *Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i = 0, j = 0, ct, in = 0;
	if (s1 == NULL && s2 == NULL)
	{	s1 = "";
		s2 = "";	}
	else if (s1 == NULL && s2 != NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	while (*(s2 + j) != '\0')
		j++;
	while (*(s1 + i) != '\0')
		i++;
	if (n >= j)
		n = j;
	s = malloc(sizeof(char) * (i + n + 1));
	if (s == NULL)
	{	return (s);	}
	else
	{
		for (ct = 0; ct < (i + n); ct++)
		{
			if (ct < i)
				*(s + ct) = *(s1 + ct);
			else
			{	*(s + ct) = *(s2 + in);
				in++;	}
		}
		*(s + i + n) = '\0';
	}
	return (s);
}
