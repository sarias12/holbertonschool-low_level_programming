#include "holberton.h"

/**
  * print_sign - Entry point
  * function that prints 10 times the alphabet, in lowercase,
  * followed by a new line.
  *
  * @n: - la descirpcion
  *
  * Return: Always 0 (Success)
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
