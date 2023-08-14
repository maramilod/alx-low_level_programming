#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - function
 * struct dog - structer
 * @d: pointer
 */
void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		exit (0);
	else if ((*d).name == NULL)
		(*d).name = "nil";
	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
