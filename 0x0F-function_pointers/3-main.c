#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point
 *
 * @argc: - description
 * @argv: - description
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char operator;
	int calc, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2][0];

	if ((operator == '/' || operator == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	switch (operator)
	{
		case '+':
		case '-':
		case '/':
		case '*':
		case '%':
			calc = (*get_op_func(argv[2]))(num1, num2);
			printf("%d\n", calc);
			return (0);
		break;
		default:
			printf("Error\n");
			exit(99);
	}
}
