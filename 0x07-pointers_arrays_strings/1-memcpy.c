/**
 *_memcpy - copies memory area
 *@dest: input
 *@src: input
 *@n: input
 *Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (*src != '\0' && i < n)
	{
		*(dest + i) = *src;
		src++;
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
