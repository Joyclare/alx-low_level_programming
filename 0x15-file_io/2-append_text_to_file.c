#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end file
 * @filename: Pointer to name of file
 * @text_content: string to add
 *
 * Return: If the function fails or filename is NULL - -1
 * If the file does not exist the user lacks write permissions - -1
 * Otherwise - 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, x, length = 0;

	if (filename == 0)
		return (-1);

	if (text_content != 0)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	x = write(p, text_content, length);

	if (p == -1 || x == -1)
		return (-1);

	close(p);

	return (1);
}
