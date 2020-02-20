#include <stdio.h>
#include "holberton.h"
/**
  * *string_toupper - function that concatenates two strings.
  *
  * @tup: string
  *
  *
  * Return: String Upper
  */
char *string_toupper(char *tup)
{
	int x;

	for (x = 0 ; tup[x] != '\0' ; x++)
	{
		if (tup[x] >= 97)
			tup[x] -= 32;
	}
	return (tup);
}
