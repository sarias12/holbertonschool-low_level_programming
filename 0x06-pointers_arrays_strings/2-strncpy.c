#include <stdio.h>
#include "holberton.h"
/**
  * *_strncpy - function that concatenates two strings.
  *
  * @dest: first string
  *
  * @src: second string
  *
  * @n: limit
  *
  * Return: Copy
  */
char *_strncpy(char *dest, char *src, int n)
{
	int x;
	
	for (x = 0 ; x < n && src[x] != '\0' ; x++)
	{
		dest[x] = src[x];
	}
	for ( ; x < n; x++)
		dest[x] = '\0';
	return (dest);
}
