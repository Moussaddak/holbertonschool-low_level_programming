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

	for (; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
