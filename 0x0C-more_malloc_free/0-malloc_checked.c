#include <stdlib.h>
/**
 * malloc_checked - func allocates memory using malloc
 *@b: input
 *Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
char *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	else
	{
		return (s);
	}
}
