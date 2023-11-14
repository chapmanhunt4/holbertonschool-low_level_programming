#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 on success -1 on failure
 **/

int create_file(const char *filename, char *text_content)
{
	int descriptor;
	unsigned long int i;

	if (filename == NULL)
	{
		return (-1);
	}
	descriptor = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (descriptor == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; i < strlen(text_content); i++)
		{
			write(descriptor, &text_content[i], 1);
		}
	}
	return (1);
}
