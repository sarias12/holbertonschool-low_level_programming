#include <stdio.h>
#include "holberton.h"
/**
  * *_strcat - function that concatenates two strings.
  *
  * @dest: first string
  *
  * @src: second string
  */
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0 ; dest[x] != '\0' ; x++)
	{
	}
	for (y = 0 ; src[y] != '\0' ; y++)
	{
		dest[x++] = src[y];
	}
	dest[x++] = '\0';
	return (dest);
}
