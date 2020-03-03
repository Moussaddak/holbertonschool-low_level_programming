#include <stdlib.h>
/**
 *create_array - creat an array
 *@size: input
 *@c: input
 *Return: array of a char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		str = malloc(sizeof(char) * size);
		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				*(str + i) = c;
			}
			return (str);
		}
	}
}
