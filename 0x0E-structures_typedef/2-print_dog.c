#include <stdio.h>
#include "dog.h"
/**
 *print_dog - function print elements of struct dog
 *@d: input
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
