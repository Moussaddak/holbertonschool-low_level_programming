#include <stdlib.h>
/**
 *_strdup -  duplicate of the string pointed to by str
 *@str: input
 *Return: string
 */
char *_strdup(char *str)
{
int i = 0, j = 0;
char *cp;
	while (*(str + i) != '\0')
	{
		i++;
	}

	cp = malloc(i * sizeof(char));

	if (cp == NULL)
	{
		return (NULL);
	}
	else
	{
		while (j <= i)
		{
			*(cp + j) = *(str + j);
			j++;
		}
		return (cp);
	}
}
