#include <stdio.h>
#include "holberton.h"
/**
 * print_line - Entry point
 * @n: - description
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int y;

	for (y = 0 ; y < n ; y++)
		_putchar(95);
	_putchar('\n');

}
