#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format: elements
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list vlist;
	int i = 0;
	int aux = 0;

	va_start(vlist, format);

	while (format[i] != '\0')
	{
		aux = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(vlist, int));
				i++;
				aux = 1;
				break;
			case 'i':
				printf("%d", va_arg(vlist, int));
				i++;
				aux = 1;
				break;
			case 'f':
				printf("%f", va_arg(vlist, double));
				i++;
				aux = 1;
				break;
			case 's':
				printf("%s", va_arg(vlist, char *));
				i++;
				aux = 1;
				break;
			default:
				i++;
				break;
		}
		if (format[i] != '\0' && aux == 1)
			printf(", ");
	}
	va_end(vlist);
	printf("\n");
}
