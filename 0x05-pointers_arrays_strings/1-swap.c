#include <stdio.h>
#include "holberton.h"
/**
  * swap_int - function that swaps the values of two integers.
  *
  * @a: variable with first value.
  *
  * @b: variable with second value.
  *
  */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}

