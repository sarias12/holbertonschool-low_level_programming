#include "holberton.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: number for sets bit according to the index
 * @index: bit position.
 * Return: new number.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	bit = bit << index;
	*n = *n | bit;
	return (*n);
}
