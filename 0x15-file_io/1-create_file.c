#include <stdlib.h>
#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: filename
 * @text_content: string to write in the fle
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, result = 1, count = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[count])
			count++;
		result = write(file, text_content, count);
	}
	if (result == -1)
		return (-1);
	close(file);
	return (1);
}
