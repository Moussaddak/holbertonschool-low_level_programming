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
int i = 0, lp, ct, in = 0;
unsigned int j = 0;
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
	{	s = malloc(sizeof(char) * (i + j + 1));
		lp = j;	}
	else
	{	s = malloc(sizeof(char) * (i + n + 1));
		lp = n;	}
	if (s == NULL)
	{	return (s);	}
	else
	{
		for (ct = 0; ct < (i + lp); ct++)
		{
			if (ct < i)
				*(s + ct) = *(s1 + ct);
			else
			{	*(s + ct) = *(s2 + in);
				in++;	}
		}
		*(s + ct + 1) = '\0';
	}
	return (s);
}
