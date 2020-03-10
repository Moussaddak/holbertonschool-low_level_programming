#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - function frees elets of struct dog
 *@d: input
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
