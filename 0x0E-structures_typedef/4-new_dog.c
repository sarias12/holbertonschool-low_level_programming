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

	secondog = malloc(sizeof(dog_t));
	if (secondog == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; name[i] != '\0' ; i++)
		;
	i++;
	secondog->name = malloc(sizeof(char) * i + 1);
		if (secondog->name == NULL)
		{
			free(secondog);
			return (NULL);
		}
	for (k = 0 ; name[k] != '\0' ; k++)
		secondog->name[k] = name[k];
	secondog->name[k] = '\0';
	for (j = 0 ; owner[j] != '\0' ; j++)
		;
	j++;
	secondog->owner = malloc(sizeof(char) * i + 1);
		if (secondog->owner == NULL)
		{
			free(secondog->name);
			free(secondog);
			return (NULL);
		}
	for (l = 0 ; owner[l] != '\0' ; l++)
		secondog->owner[l] = owner[l];
	secondog->owner[l] = '\0';
	secondog->age = age;
	return (secondog);
}

