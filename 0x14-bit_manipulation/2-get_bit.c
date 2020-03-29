#include "holberton.h"
/**
 * get_bit - Function that returns the value of a bit at a given index.
 * @n: number for given bit according to the index
 * @index: bit position.
 * Return: bit value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int get = 0;
	int bit;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	while (get < index)
	{
		n = n >> 1;
		get++;
	}
	bit = n & 1;
	return (bit);
}
