#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - Entry point
 *
 *@grid:  description
 *
 *@height:  description
 *
 * Return: Always 0 (Success)
 */


void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i <= height; i++)
		free(grid[i]);
	free(grid);

}
