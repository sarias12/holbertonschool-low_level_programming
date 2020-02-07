#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;
	int y = 97;

	while (x <= 9)
	{
		putchar(x);
		x++;
	}
	while (y <= 102)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
