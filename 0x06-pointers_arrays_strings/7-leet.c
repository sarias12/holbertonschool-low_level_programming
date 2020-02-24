#include <stdio.h>
#include "holberton.h"
/**
  * *leet - function that encodes a string into 1337.
  *
  * @s: string
  *
  *
  * Return: String Upper
  */
char *leet(char *s)
{
	int i, j;
	char letter[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char numbs[] = { '4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (s[i] == letter[j])
				s[i] = numbs[j];
		}
	}

	return (s);
}
