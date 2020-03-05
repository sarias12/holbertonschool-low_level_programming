#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_pointer - Entry point
 *
 * @b: - description
 *
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
