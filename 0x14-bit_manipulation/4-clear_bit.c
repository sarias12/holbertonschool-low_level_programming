#include "holberton.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: number for sets bit according to the index
 * @index: bit position.
 * Return: new number.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	if (*n == 0)
		return (1);
	bit = bit << index;
	*n = *n ^ bit;
	return (1);
}
