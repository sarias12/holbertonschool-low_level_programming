#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * *_strdup - Entry point
 * strlen - function
 * @s1 - description
 * @s2: - description
 *
 * Return: Always 0 (Success)
 */


char *_strdup(char *str)
{
	int i, j;
	char *vec;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
	{
	}
	i++;
	vec = malloc(sizeof(char) * i);
	for (j = 0 ; j < i ; j++)
	{
		vec[j] = str[j];
	}
	vec[j] = '\0';
	return (vec);
}
