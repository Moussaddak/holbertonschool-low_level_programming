/**
 *_strspn - gets the length of a prefix substring.
 *@s: input
 *@accept: input
 *Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0, j = 0, br = 1, k;
unsigned int count = 0;
	while (*(accept + j) != '\0')
	j++;

	while (*(s + i) != '\0' && br)
	{
		for (k = 0; k < j; k++)
		{
			if (*(s + i) == *(accept + k))
			{
				br = 1;
				count++;
				break;
			}
			else
			br = 0;
		}
		i++;
	}
return (count);
}
