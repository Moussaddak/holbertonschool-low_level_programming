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
	if (str == NULL)
	{
		return (str);
	}
	else
	{
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
	while (*(str + j) != '\0')
	{
		*(cp + j) = *(str + j);
		j++;
	}
	}
	return (cp);
}
