#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n);
			if (n < 9)
			{
				putchar(44);
				putchar(32);
			}
	}
	putchar('\n');
	return (0);

}
