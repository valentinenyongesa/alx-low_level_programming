#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * append_text_to_file - append text at end of file
 * @filename: filename
 * @text_content: text to append to file
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, _write, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	_write = write(fd, text_content, len);
	if (fd == -1 || _write == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
