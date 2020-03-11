#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - Entry point
 *
 * @name: - description
 * @f: - description
 * Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}

