#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y = 'a';

	for  (x = 48 ; x <= 57 ; x++)
		putchar(x);
	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
