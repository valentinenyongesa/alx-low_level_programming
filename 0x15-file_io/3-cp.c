#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_buffer - allocate memory for buffer
 * @file: name of file buffer is storing data for
 * Return: 0
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - close file descriptor
 * @fd: file descriptor
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies content of a file to another file
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int f0, f1, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	f0 = open(argv[1], O_RDONLY);
	r = read(f0, buffer, 1024);
	f1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f0 == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(f1, buffer, r);
		if (f1 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(f0, buffer, 1024);
		f1 = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_file(f0);
	close_file(f1);
	return (0);
}
