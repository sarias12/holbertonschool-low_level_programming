#include "holberton.h"

/**
  * _isalpha - Entry point
  * function that prints 10 times the alphabet, in lowercase,
  * followed by a new line.
  *
  * @c: - la descirpcion
  *
  * Return: Always 0 (Success)
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
