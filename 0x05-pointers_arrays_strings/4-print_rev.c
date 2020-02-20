#include <stdio.h>
#include "holberton.h"
/**
  * print_rev - function that prints a string, followed by a new line.
  *
  * @s: variable
  *
  * Return: string in reverse
  */
void print_rev(char *s)
{
	int x;

	for (x = 0 ; s[x] != '\0' ; x++)
	{
	}
	x -= 1;
	while (x >= 0)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}
