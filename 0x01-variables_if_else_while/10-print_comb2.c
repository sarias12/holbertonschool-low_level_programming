#include <stdio.h>
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
		int y = 0;

		while (y < 10)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x != 9 || y != 9)
			{
				putchar(44);
			}
			putchar(32);
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
