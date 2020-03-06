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
	void *arr;
	int *ind;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	ind = arr;
	for (; min <= max ; min++)
		ind[min] = min;
	return (arr);
}
