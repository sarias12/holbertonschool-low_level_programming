#include <stdio.h>
#include "holberton.h"
/**
 * print_square - Entry point
 * @size: - description
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (y = 0 ; y < size ; y++)
		{
			for (x = 0 ; x < size ; x++)
			_putchar(35);
		_putchar('\n');
		}
	}
}
