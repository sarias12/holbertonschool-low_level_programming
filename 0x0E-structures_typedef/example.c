#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Entry point
 *
 * @name: - description
 * @age: - description
 * @owner: - description
 *
 * Return: Always 0 (Success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *secondog;
	int i, j, l, k;
	char *name2, *owner2;

	secondog = malloc(sizeof(struct dog));
	if (secondog == NULL)
	{
		free(secondog);
		return (NULL);
	}
	for (i = 0 ; name[i] != '\0' ; i++)
	{
	}
	name2 = malloc(sizeof(char) * i + 1);
		if (name == NULL)
		{
			free(name);
			free(secondog);
			return (NULL);
		}
	for (k = 0 ; name[k] != '\0' ; k++)
		name2[k] = name[k];
	secondog->name = name2;
	secondog->age = age;
	for (j = 0 ; owner[j] != '\0' ; j++)
	{
	}
	owner2 = malloc(sizeof(char) * i + 1);
		if (owner == NULL)
		{
			free(owner);
			free(name);
			free(secondog);
			return (NULL);
		}
	for (l = 0 ; owner[l] != '\0' ; l++)
		owner2[l] = owner[l];
	secondog->owner = owner2;
	return (secondog);
}

