#include <stdio.h>
#include "holberton.h"
/**
  * puts_half - function that prints a string, followed by a new line.
  *
  * @str: variable
  *
  * Return: length of string
  */
void puts_half(char *str)
{
	int x;

	for (x = 0 ; str[x] != '\0' ; x++)
	{
	}
	if (x % 2 != 0)
		x -= 1;
	for (x /= 2 ; str[x] != '\0' ; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
