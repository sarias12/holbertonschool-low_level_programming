#include <stdio.h>
#include "holberton.h"
/**
  * *_strchr - function that fills memory with a constant byte.
  *
  * @s: array
  *
  * @c: value for locate
  *
  *
  * Return: Constant byte
  */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0 ; s[x] != '\0' ; x++)
	{
		if (s[x] == c || s[x] == '\0')
		{
			return (s + x);
		}
	}
	return (NULL);
}
