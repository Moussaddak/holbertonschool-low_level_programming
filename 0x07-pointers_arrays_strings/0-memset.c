/**
 *_memset - fill a block of memory with a particular value.
 *@s: Starting address of memory to be filled
 *@b: Value to be filled
 *@n: number of bytes to be filled starting from s to be filled
 *Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < sizeof(char) * n; i++)
		*(s + i) = b;
	return (s);
}
