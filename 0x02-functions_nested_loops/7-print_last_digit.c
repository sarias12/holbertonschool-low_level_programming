#include "holberton.h"

/**
  * print_last_digit - Entry point
  * function that computes the absolute value of an integer,
  * followed by a new line.
  *
  * @n: - the description
  *
  * Return: Always 0 (Success)
  */
int print_last_digit(int n)
{
	if (n < 0)
	{	
		n *= -1;
	}
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
