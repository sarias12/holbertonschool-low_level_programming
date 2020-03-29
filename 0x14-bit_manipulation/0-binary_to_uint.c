#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: binary number
 * Return: conversion int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int rect, number = 0;
	int index1, index2;

	rect = 1;
	for (index1 = 0 ; b[index1] != '\0' ; index1++)
	{
		if (b[index1] != '0' && b[index1] != '1')
		{
			return (0);
		}
	}
	index1--;
	index2 = index1;
	while (index1 >= 0)
	{
		if (b[index1] == '0' && index2 == index1)
		{
			rect = 1;
			number = 0;
		}
		if (b[index1] == '0' && index2 != index1)
		{
			rect *= 2;
		}
		if (b[index1] == '1' && index2 == index1)
		{
			rect = 1;
			number = 1;
		}
		if (b[index1] == '1' && index2 != index1)
		{
			rect *= 2;
			number += rect;
		}
		index1--;
	}
	return (number);
}
