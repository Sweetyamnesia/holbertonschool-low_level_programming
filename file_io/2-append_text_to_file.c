#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	if (text_content == NULL)
	{
	close(fd);
	return (1);
	}

	return (1);
}
