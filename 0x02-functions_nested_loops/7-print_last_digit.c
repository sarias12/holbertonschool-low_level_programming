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
	int y;
	y = n % 10;
	if (n < 0)
		y *= -1;

	_putchar(y + '0');
	return (y);
}
