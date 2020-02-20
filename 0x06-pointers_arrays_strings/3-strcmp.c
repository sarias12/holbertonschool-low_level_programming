#include <stdio.h>
#include "holberton.h"
/**
  * _strcmp - function that compares two strings.
  *
  * @s1: first string
  *
  * @s2: second string
  *
  * Return: result
  */
int _strcmp(char *s1, char *s2)
{
	int x, z;

	for (x = 0 ; s1[x] != '\0' && s2 != '\0' ; x++)
	{
		z = s1[x] - s2[x];
		if (s1[x] != s2[x])
		{
			break;
		}
	}
	return (z);
}
