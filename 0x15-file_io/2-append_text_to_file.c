#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file to be appended.
 * @text_content: the text to be appended.
 * Return: 1 Succes, -1 fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t n_write;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		n_write = write(file, text_content, strlen(text_content));
		if (n_write == -1)
		{
			close(file);
			return (1);
		}
	}
	close(file);
	return (1);
}
