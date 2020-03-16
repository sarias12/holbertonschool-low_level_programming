#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints numbers, followed by a new line.
 * @n: elements
 * @separator: string to be printed between numbers.
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vlis;
	unsigned int i;
	char *p;

	va_start(vlis, n);

	for (i = 0; i < n ; i++)
	{
	p = va_arg(vlis, char *);
		if (p == NULL)
		{
			printf("(nil)%s", separator);
		}
		else
		{
			printf("%s", p);
			if (separator != NULL)
			{
				if (i != n - 1)
				{
					printf("%s", separator);
				}
			}
		}
	}
	va_end(vlis);
	printf("\n");
}
