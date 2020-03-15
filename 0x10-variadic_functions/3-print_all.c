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
	int aux = 0, i = 0;
	char *s;

	va_start(vlist, format);

	while (format[i] != '\0')
	{	aux = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", (char)va_arg(vlist, int));
				aux = 1;
				break;
			case 'i':
				printf("%d", va_arg(vlist, int));
				aux = 1;
				break;
			case 'f':
				printf("%f", (float)va_arg(vlist, double));
				aux = 1;
				break;
			case 's':
				s = va_arg(vlist, char *);
				if (s != NULL)
				{	printf("%s", s);
					aux = 1;
					break;
				}
				printf("(nil)");
				break;
			default:
				break;
		}
		i++;
		if (format[i] != '\0' && aux == 1)
			printf(", ");
	}
	va_end(vlist);
	printf("\n");
}
