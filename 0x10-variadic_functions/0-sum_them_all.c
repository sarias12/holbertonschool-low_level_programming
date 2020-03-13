#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - check the code for Holberton School students.
 * @n: elements
 * Return: add elements.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vars;
	unsigned int i;
	int sum = 0;

	va_start(vars, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0 ; i < n; i++)
	{
		sum += va_arg(vars, int);
	}
	va_end(vars);
	return (sum);
}
