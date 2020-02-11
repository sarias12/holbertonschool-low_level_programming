#include "holberton.h"
/**
 *print_alphabet - Entry point
 *function that prints the alphabet, in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a' ; x <= 'z' ; x++)
		_putchar(x);
	_putchar('\n');
}
