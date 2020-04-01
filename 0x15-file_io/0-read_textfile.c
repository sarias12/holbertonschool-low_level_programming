#include "holberton.h"
/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output.
 * @letters: the number of letters it should read and print.
 * @filename: File Descriptor.
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int flow, sz, dp;
	char *text;

	if (filename == NULL)
		return (0);

	text = malloc(sizeof(char) * letters);
	if (text == NULL)
	{
		return (0);
	}
	flow = open(filename, O_RDONLY);
	if (flow < 0)
	{
		free(text);
		return (0);
	}
	sz = read(flow, text, letters);
	if (sz < 0)
	{
		close(flow);
		free(text);
		return (0);
	}
	dp = write(1, text, sz);
	if (dp < 0 || sz != dp)
	{
		close(flow);
		free(text);
		return (0);
	}
	close(flow);
	free(text);
	return (sz);
}
