#include "holberton.h"

/**
  * _abs - Entry point
  * function that computes the absolute value of an integer,
  * followed by a new line.
  *
  * @n: - the description
  *
  * Return: Always 0 (Success)
  */
int _abs(int n)
{
	if (n >= 0)
	{
		n = n;
	}
	else if (n < 0)
	{
		n *=  -1;
	}
	return (n);
}
