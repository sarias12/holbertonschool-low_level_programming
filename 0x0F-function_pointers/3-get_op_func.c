#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *  - Entry point
 *
 * @name: - description
 * @f: - description
 * Return: Always 0 (Success)
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
}


