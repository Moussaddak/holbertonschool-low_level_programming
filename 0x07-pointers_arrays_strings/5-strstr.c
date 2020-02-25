#include <stdio.h>
/**
 *_strstr - function that locates a substring
 *@haystack: input
 *@needle: input
 *Return: string
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0, key = 0, k = 0;
char *r;
r = NULL;
	while (*(needle + j) != '\0')
	j++;

	while (*(haystack + i) != '\0' && *needle != '\0')
	{
		if (*(haystack + i) == *needle)
		{
			key = 1;
			r = haystack + i;
		}
		while (k < j && key)
		{
			if (*(haystack + i) == *(needle + k))
				continue;
			else
			{
				k = 0;
				key = 0;
				r = NULL;
				break;
			}
			i++;
			k++;
		}
		if (k == j)
		break;
		i++;
	}
	if (*needle == '\0')
	r = haystack;

return (r);
}
