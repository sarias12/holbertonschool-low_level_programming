#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
  * main - Entry point.
  *
  * @argv: vectors
  *
  * @argc: count arguments
  *
  * Return: Success
  */
int main(int argc, char *argv[])
{
	int i;
	int add = 0;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (*argv[i] >= '0' && *argv[i] <= '9')
			{
			add += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", add);
	}
	else
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	return (0);
}
