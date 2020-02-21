#include <stdio.h>
#include <stdbool.h>
#include "holberton.h"
/**
  * *cap_string - function that capitalizes all words of a string..
  *
  * @s: string
  *
  *
  * Return: String Upper
  */
char *cap_string(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			if (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.')
			if (s[i - 1] == '\n' || s[i - 1] == '(' || s[i - 1] == ')')
			if (s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1] == '\t')
			if (s[i - 1] == ' ' || s[i - 1] == '!' || s[i - 1] == '?')
			if (s[i - 1] == '"')
				s[i] -= 32;
		}
	}

	return (s);
}
