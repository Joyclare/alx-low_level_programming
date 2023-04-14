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

	if (filename == NULL)
	{
		return -1;
	}

	j = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (j == -1)
	{
		return -1;
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (k = 0; text_content[k]; k++)
		;

	l = write(j, text_content, k);

	if (l == -1)
	{
		return -1;
	}

	close(j);

	return 1;
}
