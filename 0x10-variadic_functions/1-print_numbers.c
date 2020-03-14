#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @n: elements
 * @separator: string to be printed between numbers.
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlis;
	unsigned int i;

	va_start(vlis, n);
	for (i = 0; i < n ; i++)
	{
		printf("%d", va_arg(vlis, int));
		if (separator != NULL)
			if (i != n - 1)
			{
				printf("%s", separator);
			}
	}
	printf("\n");
}
