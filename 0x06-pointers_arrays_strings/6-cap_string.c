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
	int i;

	for (i = 0 ; tcap[i] != '\0' ; i++)
	{
		if (tcap[i] > 96 && tcap[i] < 123)
		{
			if (tcap[i - 1] == ',' || tcap[i - 1] == ';' || tcap[i - 1] == '.')
			if (tcap[i - 1] == '\n' || tcap[i - 1] == '(' || tcap[i - 1] == ')')
			if (tcap[i - 1] == '{' || tcap[i - 1] == '}' || tcap[i - 1] == '\t')
			if (tcap[i - 1] == ' ' || tcap[i - 1] == '!' || tcap[i - 1] == '?' || tcap[i - 1] == '"')
				tcap[i] -= 32;
		}

		else 
		{
			tcap[i] -= 0;
		}	
	}
	return (tcap);
}
