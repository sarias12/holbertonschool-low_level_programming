#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Entry point
 *
 * @d: - description
 *
 * Return: Always 0 (Success)
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

