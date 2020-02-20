#include <stdio.h>
#include "holberton.h"
/**
  * reverse_array - function that reverses the content of an array of integers.
  *
  * @a: first string
  *
  * @n: second string
  *
  * Return: Concatenat
  */
void reverse_array(int *a, int n)
{
	int z[1000];
	int y, x;

	for (x = 0 ; x < n ; x++)
	{
		z[x] = a[x];
	}
	for (y = 0 ; y < x ; y++)
	{
		a[(n - 1) - y] = z[y];
	}

}
