#include <stdlib.h>
/**
 *_calloc - creat an array
 *@nmemb: input
 *@size: input
 *Return: array of a char
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *p;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc(nmemb * size);
		if (p == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < (size * nmemb); i++)
			{
				*(p + i) = 0;
			}
		}
	}
	return (p);
}
