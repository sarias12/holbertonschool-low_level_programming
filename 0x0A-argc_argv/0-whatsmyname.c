#include <stdio.h>
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

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
