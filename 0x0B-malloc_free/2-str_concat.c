#include <stdlib.h>
/**
 *str_concat - concatinate s2 into s1
 *@s1: input
 *@s2: input
 *Return: string
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, c = 0, f = 0;
char *cat;

	if (s2 != NULL  && s1 == NULL)
		return (s2);
	else if (s2 == NULL && s1 != NULL)
		return (s1);
	else if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (*(s2 + i) != '\0')
		i++;
	while (*(s1 + j) != '\0')
		j++;
	cat = malloc((i + j + 1) * sizeof(char));
	if (cat == NULL)
	{
		return (cat);
	}
	else
	{
		while (c <= (i + j))
		{
			if (c < j)
			{
				*(cat + c) = *(s1 + c);
				c++;
			}
			else
			{
				*(cat + c) = *(s2 + f);
				c++;
				f++;
			}
		}
		return (cat);
	}
}
