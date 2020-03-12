#include <stdlib.h>
#include "dog.h"
char *_strdup(char *str);
/**
 *new_dog - function stores dog info
 *@name: input
 *@age: input
 *@owner: input
 *Return: type struct dog pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;
	char *n, *o;

	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
	{
		return (NULL);
	}

	n = _strdup(name);
	o = _strdup(owner);

	if (n == NULL || o == NULL)
	{
		free(n);
		free(o);
		free(dogg);
		return (NULL);
	}

	dogg->name = name;
	dogg->age = age;
	dogg->owner = owner;

	return (dogg);
}
/**
 *_strdup -  duplicate of the string pointed to by str
 *@str: input
 *Return: string
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *cp;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + i) != '\0')
	{
		i++;
	}

	cp = malloc(i * sizeof(char) + 1);
	if (cp == NULL)
	{
		return (NULL);
	}

	while (*(str + j) != '\0')
	{
		*(cp + i) = *(str + j);
		j++;
	}

	return (cp);
}
