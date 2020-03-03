#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * *_strdup - Entry point
 *
 * @str:  description
 *
 * Return: Always 0 (Success)
 */


char *_strdup(char *str)
{
	int i, j;
	char *vec;

	if (str == 0)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
	{
	}
	i++;
	vec = malloc(sizeof(char) * i);
	if (vec == NULL)
		return (NULL);
	for (j = 0 ; j < i ; j++)
	{
		vec[j] = str[j];
	}
	vec[j] = '\0';
	return (vec);
}
