/**
 *cap_string - capitalizes all words of a string.
 *@s: input
 *Return: string
 */
char *cap_string(char *s)
{
	char l[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t',
		    ' '};
	char *r = s;
	int i, test;

	if (*s >= 97 && *s <= 122)
		*s -= 32;
	s++;
	while (*s != '\0')
	{
		i = 0;
		test = 1;
		while (i < 15 && test)
		{
			if (*s == l[i])
			{
				s++;
				if (*s >= 97 && *s <= 122)
				{
					*s -= 32;
					test = 0;
				}
				else
					test = 1;
			}
			i++;
		}
		s++;
	}
	return (r);
}
