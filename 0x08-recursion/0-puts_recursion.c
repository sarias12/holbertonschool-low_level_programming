#include <stdio.h>
#include "holberton.h"
/**
  * _puts_recursion - function that fills memory with a constant byte.
  *
  * @s: string
  *
  * Return: string
  */
void _puts_recursion(char *s)
{
	
	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
}
