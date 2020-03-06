#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * array_range - Entry point
 *
 * @min: - description
 * @max: - description
 *
 * Return: Always 0 (Success)
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < (max - min + 1) ; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
