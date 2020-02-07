#include <stdio.h>
#define N 10
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		if (0 < 9)
		{	
			putchar(44);
			putchar(32);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
