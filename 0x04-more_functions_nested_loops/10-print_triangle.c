#include <stdio.h>
#include "holberton.h"
/**
 * print_diagonal - Entry point
 * @n: - description
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int tab, line;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (tab = 0 ; tab < n ; tab++)
		{
			for (line = 0 ; line < tab ; line++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
