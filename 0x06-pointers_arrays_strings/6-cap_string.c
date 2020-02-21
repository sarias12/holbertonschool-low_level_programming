#include <stdio.h>
#include <stdbool.h>
#include "holberton.h"
/**
  * *cap_string - function that capitalizes all words of a string..
  *
  * @tcap: string
  *
  *
  * Return: String Upper
  */
char *cap_string(char *tcap)
{
	int x;
	bool a, b, c;

	for (x = 0 ; tcap[x] != '\0' ; x++)
	{
		a = (tcap[x] >= 97 && tcap[x] <= 122);
		b = (tcap[x - 1] < 65 || tcap[x - 1] > 122);
		c = (!(tcap[x - 1] > 47 && tcap[x - 1] < 58));
		if (a && b && c)
			tcap[x] -= 32;
		if (tcap[x] == '\t')
			tcap[x] = ' ';
	}
	return (tcap);
}
