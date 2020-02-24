#include <stdio.h>
#include "holberton.h"
/**
  * *_strchr - function that fills memory with a constant byte.
  *
  * @s: array
  *
  * @c: value for change
  *
  * @n: index
  *
  * Return: Constant byte
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
