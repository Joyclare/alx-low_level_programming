#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- reads a text file and prints standard output
 * @filename: text file
 * @letters: number of letters
 * Return: if filename is NULL return 0
 * if write fails return 0
 * w when the number of bytes read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t written;
	ssize_t read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	read = read(fd, buf, letters);
	written = write(STDOUT_FILENO, buf, read);

	free(buffer);
	close(fd);
	return (written);
}
