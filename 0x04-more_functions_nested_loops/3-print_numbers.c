#include <stdio.h>
#include "holberton.h"
/**
 * mul - Entry point
 *
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int n;

	for ( n = 0 ; n <= 9 ; n++)
		_putchar(n + '0');
	putchar('\n');

}
