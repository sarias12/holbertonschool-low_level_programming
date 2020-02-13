#include <stdio.h>
#include "holberton.h"
/**
 * more_numbers - Entry point
 *
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int n, y;

	for (y = 0 ; y < 9 ; y++)
	{
		for (n = 0 ; n <= 14 ; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
