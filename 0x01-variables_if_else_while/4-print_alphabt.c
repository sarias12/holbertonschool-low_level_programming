#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

	for (x = 'a' ; x <= 'd' ; x++)
		putchar(x);
	for (y = 'f' ; y <= 'p' ; y++)
		putchar(y);
	for (z = 'r' ; z <= 'z' ; z++)
		putchar(z);
	putchar('\n');
	return (0);
}
