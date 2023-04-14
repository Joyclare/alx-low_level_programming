#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
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
	char *buffer;
	ssize_t file_descriptor;
	ssize_t j;
	ssize_t k;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	k = read(file_descriptor, buffer, letters);
	j = write(STDOUT_FILENO, buffer, k);

	free(buffer);
	close(file_descriptor);
	return (j);
}
