#include <stdio.h>
#include "holberton.h"
/**
 * _isdigit - Entry point
 *
 * @c: - description
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
