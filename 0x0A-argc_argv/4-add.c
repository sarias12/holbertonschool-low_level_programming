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
	int i, j;
	int add = 0;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			for (j = 0 ; *(argv[i] + j) != '\0'; j++)
			{
				if (*(argv[i] + j) >= '0' && *(argv[i] + j)  <= '9')
				{
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[i]);
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
