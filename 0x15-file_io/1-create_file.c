#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the name of the file to be created.
 * @text_content: the content to be written into the file.
 * Return: 1 Success, -1 failuer.
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t n_write;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_TURNC | O_WDONLY, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		n_write = write(file, text_content, strlen(text_content));
		if (n_write == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}

