#include "main.h"
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>

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
	int j, k, l;

	if (!filename)
		return (-1);

	j = open(filename, O_WRONLY | O_APPEND);

	if (j == -1)
		return (-1);

	if (text_content)
	{
		for (k = 0; text_content[k]; k++)
			;

		l = write(j, text_content, k);

		if (l == -1)
			return (-1);
	}

	close(j);
	return (1);
}
