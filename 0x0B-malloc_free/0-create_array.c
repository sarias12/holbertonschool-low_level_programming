#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * *create_array - Entry point
 *
 * @size: - description
 * @c: - description
 *
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *vec;

	if (size == 0)
		return (NULL);

	vec = malloc(sizeof(char) * size);
	for (i = 0 ; i < size ; i++)
		vec[i] = c;
	return (vec);


}
