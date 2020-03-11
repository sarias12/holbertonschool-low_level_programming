#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - Entry point
 *
 * @array: - description
 * @size: - description
 * @action: - description
 *
 *Return: Always 0 (Success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i;

	if (action != NULL && array != NULL)
		for (i = 0 ; i < size ; i++)
			action(array[i]);
}

