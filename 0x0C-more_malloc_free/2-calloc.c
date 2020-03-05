#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - Entry point
 *
 * @nmemb: - description
 * @size: - description
 *
 * Return: Always 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *arr;
	char *ind;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	ind = arr;
	for (i = 0 ; i < nmemb * size ; i++)
		ind[i] = 0;
	return (arr);

}
