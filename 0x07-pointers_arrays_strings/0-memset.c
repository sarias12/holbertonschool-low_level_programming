#include <stdio.h>
#include "holberton.h"
/**
  * *_memset - function that fills memory with a constant byte.
  *
  * @s: array
  *
  * @b: value for change
  *
  * @n: index
  *
  * Return: Constant byte
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x <= n ; x++)
	{
		s[x] = b;
	}
	return (s);
}
