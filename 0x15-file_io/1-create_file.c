#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: pointer to the name of the file
 * @text_content: pointer to a string to write
 *
 * Return: If the function fails - -1
 * Otherwise - 1
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, x, length = 0;

	if (filename == 0)
		return (-1);

	if (text_content != 0)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(file_d, text_content, length);

	if (file_d == -1 || x == -1)
		return (-1);

	close(file_d);

	return (1);
}
