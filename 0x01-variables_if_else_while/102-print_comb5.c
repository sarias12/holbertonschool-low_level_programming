#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z, w;

	for (z = '0'; z <= '9'; z++)
	{
		for (w = '0'; w <= '9'; w++)
		{
			for (x = z ; x <= '9'; x++)
			{
				for (y = w + 1 ; y <= '9'; y++)
				{
					putchar(z);
					putchar(w);
					putchar(' ');
					putchar(x);
					putchar(y);
					if ((x != '9' || y != '9') || (z != '9' || w != '8'))
					{
						putchar(',');
						putchar(' ');

					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
