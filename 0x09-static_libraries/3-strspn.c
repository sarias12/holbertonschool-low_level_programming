#include "holberton.h"
/**
  * _strspn - function that fills memory with a constant byte.
  *
  * @s: array
  *
  * @accept: value for locate
  *
  *
  * Return: size byte(s). (count)
  */
unsigned int _strspn(char *s, char *accept)
{
	int x, y;
	unsigned int count = 0;
	unsigned int before;

	before = count;
	for (x = 0 ; s[x] != '\0' ; x++)
	{
		for ( y = 0 ; accept[y] != '\0' ; y++)
		{
			if (accept[y] == s[x])
			{
				count++;
			}
		}
		if (before == count)
			break;
	}
	return (count);

}
