#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * _strlen - function that returns the length of a string.
  *
  * @s: variable
  * Return: length of string
  */
int _strlen(char *s)
{
	int x;

	for (x = 0 ; s[x] != '\0' ; x++)
	{
	}
	return (x);
}

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
	int l, k;

	secondog = malloc(sizeof(dog_t));
	if (secondog == NULL)
	{
		return (NULL);
	}
	secondog->name = malloc(_strlen(name) + 1);
		if (secondog->name == NULL)
		{
			free(secondog);
			return (NULL);
		}
	for (k = 0 ; name[k] != '\0' ; k++)
		secondog->name[k] = name[k];
	secondog->name[k] = '\0';
	secondog->owner = malloc(_strlen(owner) + 1);
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

