#include <stdlib.h>
#include "dog.h"
#include <string.h>
/*char *_strdup(char *str);*/

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
	/*char *n, *o;*/

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	/*n = _strdup(name);
	  o = _strdup(owner);*/
	(*dog).name = strdup(name);
	(*dog).owner = strdup(owner);
	(*dog).age = age;

	if ((*dog).name == NULL || (*dog).owner == NULL)
	{
		free((*dog).name);
		free((*dog).owner);
		free(dog);
		return (NULL);
	}


	return (dog);
}
