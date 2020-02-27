#include <stdio.h>
#include "holberton.h"
/**
  * _strlen_recursion - function that fills memory with a constant byte.
  *
  * @s: string
  *
  * Return: lenth
  */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
