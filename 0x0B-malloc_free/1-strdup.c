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
	if (i == 0)
	{
		return (NULL);
	}
	cp = malloc(i * sizeof(char) + 1);
	if (cp == NULL)
	{
		return (cp);
	}
	else
	{
		for (; j <= i; j++)
		{
			*(cp + j) = *(str + j);
		}
		*(cp + j) = '\0';
		return (cp);
	}

}
