#include "main.h"
#include <stddef.h>

/**
 * append_text_to_file - appends text
 * @filename: points to the name of file
 * @text_content: content to add to end of file
 * Return: If the function fails or filename is NULL - -1
 * if the file does not exist or if you do not have the required permissions
 * to write the file
 * Otherwise - 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int p, x, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	p = open(filename, 0_WRONLY | 0_APPEND);
	x = write(p, text_content, length);

	if (p == -1 || x == -1)
			return (-1);
	close(p);
	return (1);
}
