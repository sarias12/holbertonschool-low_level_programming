#include "holberton.h"
/**
 *print_alphabet_x10 - Entry point
 * function that prints 10 times the alphabet, in lowercase,
 *followed by a new line.
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int x, y;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 'a' ; y <= 'z' ; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
