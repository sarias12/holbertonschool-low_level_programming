#include <stdio.h>
#include "holberton.h"
/**
  * *_strncat - function that concatenates two strings.
  *
  * @dest: first string
  *
  * @src: second string
  * Return: Concatenat
  */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0 ; dest[x] != '\0' ; x++)
	{
	}
	for (y = 0 ; y != n ; y++)
	{
		dest[x++] = src[y];
	}
	dest[x++] = '\0';
	return (dest);
}
