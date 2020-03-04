#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * *str_concat - Entry point
 *
 * @s1:  description
 *
 * @s2:  description
 *
 * Return: Always 0 (Success)
 */


char *str_concat(char *s1, char *s2)
{
	int i, j, k, m;
	char *vec;

	for (i = 0 ; s1[i] != '\0' ; i++)
	{
	}
	for (j = 0 ; s2[j] != '\0' ; j++)
	{
	}
	vec = malloc(sizeof(char) * (i + j + 1));
	if (vec == NULL)
		return (NULL);
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (k = 0 ; k < i ; k++)
		vec[k] = s1[k];
	m = 0;
	for (; k < i + j ; k++)
	{
		vec[k] = s2[m];
		m++;
	}
	vec[k] = '\0';
	return (vec);
}
