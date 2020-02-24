#include <stdio.h>
/**
 *_strstr - function that locates a substring
 *@haystack: input
 *@needle: input
 *Return: string
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0, br = 1, k, test = 0;
char *r;
r = NULL;
	while (*(needle + j) != '\0')
	j++;

	while (*(haystack + i) != '\0' && br)
	{
		for (k = 0; k < j; k++)
		{
			if (*(haystack + i) == *(needle + k))
			{
				br = 0;
				r = haystack + i;
				break;
			}
		}
		i++;
	}
	while (*(haystack + i) != '\0' && k < j)
	{
		if (*(haystack + i) == *(needle + k))
			test = 1;
		else
			test = 0;
		i++;
		k++;
	}
	if (test == 0)
		r = NULL;

return (r);
}
