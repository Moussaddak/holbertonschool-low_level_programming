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
	else
	{
		cp = malloc(i * sizeof(char));
		if (cp == NULL)
		{
			return (NULL);
		}
		else
		{
			for (;j <= i; j++)
			{
				*(cp + j) = *(str + j);
			}
			return (cp);
		}
	}
}
