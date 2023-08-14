#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - function
 * struct dog - structer
 * @d: pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
