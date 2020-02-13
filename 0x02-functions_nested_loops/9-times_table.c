#include "holberton.h"

/**
  * times_table - Entry point
  * Write a function that prints every minute of the day of Jack Bauer,
  * starting from 00:00 to 23:59
  *
  *
  * Return: Always 0 (Success)
  */
void times_table(void)
{
	int x, y, d;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 9 ; y++)
		{
			d = x * y;
			if (d > 9)
			{
				_putchar(d / 10 + '0');
				_putchar(d % 10 + '0');
			}
			else
			{
				_putchar(d + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
