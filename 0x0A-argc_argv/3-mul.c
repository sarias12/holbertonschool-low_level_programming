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
	int mul = 1;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
