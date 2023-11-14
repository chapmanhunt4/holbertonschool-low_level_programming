#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: name of file
 * @letters: characters to be read
 * Return: number of letters read
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int n, descriptor;
	unsigned long int i;
	char *size;

	size = malloc(sizeof(char) * letters);
	if (filename == NULL)
	{
		return (0);
	}
	descriptor = open(filename, O_RDONLY);
	if (!descriptor)
	{
		close(descriptor);
		return (0);
	}
	n = read(descriptor, size, letters);
	if (n <= 0)
	{
		close(descriptor);
		return (0);
	}
	for (i = 0; i < letters && (int)i < n; i++)
	{
		write(STDOUT_FILENO, &size[i], 1);
	}
	close(descriptor);
	return (n);
}
