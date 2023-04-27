#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: file to create
 * @text_content: content to write to file
 * Return: 1 on success
 * -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int j;
	int k;
	int l;

	if (filename == 0)
		return (-1);

	if (text_content != 0)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	j = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	k = write(j, text_content, l);


	if (j == -1 || k == -1)
		return (-1);

	close(j);

	return (1);
}
