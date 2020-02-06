#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int word = 122;

	while (word >= 97)
	{
		putchar(word);
		word--;
	}
	putchar('\n');
	return (0);
}
