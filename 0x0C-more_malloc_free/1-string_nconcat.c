#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * string_nconcat - Entry point
 *
 * @s1: - description
 * @s2: - description
 * @n: - description
 *
 * Return: Always 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, m, size;
	char *vec;

	for (i = 0 ; s1[i] != '\0' ; i++)
	{
	}
	for (m = 0 ; s2[m] != '\0' ; m++)
	{
	}
	if (n >= m)
	{
		size = m + i;
	}
	else
	{
		size = i + n;
	}
	vec = malloc(sizeof(char) * size + 1);
	if (vec == NULL)
	{
		free(vec);
		return (NULL);
	}
	for (j = 0 ; s1 && j < i ; j++)
	{
		vec[j] = s1[j];
	}
	for (k = 0 ; s2 && j < size ; j++)
	{
		vec[j] = s2[k];
		k++;
	}
	vec[j] = '\0';
	return (vec);
}
