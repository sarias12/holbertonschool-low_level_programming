#include "holberton.h"

/**
  * _islower - Entry point
  * function that prints 10 times the alphabet, in lowercase,
  * followed by a new line.
  *
  * @c: - la descirpcion
  *
  * Return: Always 0 (Success)
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
