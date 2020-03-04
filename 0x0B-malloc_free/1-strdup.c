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
	if (str == NULL || str == '\0')
	{
		return (str);
	}
	else
	{
	while (*(str + i) != '\0')
	{
		i++;
	}
	cp = malloc(i * sizeof(char) + 1);
	if (cp == NULL)
	{
		return (cp);
	}
	while (*(str + j) != '\0')
	{
		*(cp + j) = *(str + j);
		j++;
	}
	}
	return (cp);
}
