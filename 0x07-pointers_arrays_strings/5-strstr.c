#include <stdio.h>
/**
 *_strstr - function that locates a substring
 *@haystack: input
 *@needle: input
 *Return: string
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0, key = 0, k = 0, test = 0;
char *r;
r = NULL;
	while (*(needle + j) != '\0')
	j++;

	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *needle)
		{
			key = 1;
			r = haystack + i;
			break;
		}
		i++;
	}
	while ((*(r + i) != '\0' && *(needle + k) != '\0') && key)
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
