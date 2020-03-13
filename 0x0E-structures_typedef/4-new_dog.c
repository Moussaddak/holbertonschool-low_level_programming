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
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	(*dog).name = _strdup(name);
	(*dog).owner = _strdup(owner);

	if ((*dog).name == NULL || (*dog).owner == NULL)
	{
		free((*dog).name);
		free((*dog).owner);
		free(dog);
		return (NULL);
	}

	(*dog).age = age;

	return (dog);
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
		cp[j] = str[j];
		j++;
	}

	*(cp + j) = '\0';

	return (cp);
}
