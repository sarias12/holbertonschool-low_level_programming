#include <stdio.h>
#include "holberton.h"
/**
  * _print_rev_recursion - function that fills memory with a constant byte.
  *
  * @s: string
  *
  * Return: string
  */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
