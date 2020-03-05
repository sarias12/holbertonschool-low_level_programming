#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * *alloc_grid - Entry point
 *
 *@width:  description
 *
 *@height:  description
 *
 * Return: Always 0 (Success)
 */


int **alloc_grid(int width, int height)
{
	int i, j;
	int **vec;

	if (height <= 0 || width <= 0)
		return (NULL);
	vec = malloc(sizeof(int *) * height);
	if (vec == NULL)
	{
		free(vec);
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		vec[i] = malloc(sizeof(int) * width);
		if (vec[i] == NULL)
		{
			for (j = 0 ; j < i ; j++)
			{
				free(vec[i]);
				return (NULL);
			}
		}
		for (j = 0 ; j < width ; j++)
			vec[i][j] = 0;
	}
	return (vec);
}
