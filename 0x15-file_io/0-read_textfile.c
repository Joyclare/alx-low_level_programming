#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads text file
 * @filename: text file
 * @letters: number of letters
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_d;
	ssize_t x;
	ssize_t u;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	u = read(file_d, buffer, letters);
	x = write(STDOUT_FILENO, buffer, u);

	free(buffer);
	close(file_d);
	return (x);
}
