include <stdio.h>
#include "dog.h"
/**
 *free_dog - function frees elets of struct dog
 *@d: input
 */
void free_dog(dog_t *d)
{
	free(d);
}
