#include "main.h"

/**
 * close_file - close the file.
 * @file: file to be closed.
 */

void close_file(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * check_input - check the number of inputs.
 * @argc: number
 */
void check_input(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: number of argument.
 * @argv: array of array of argument.
 * Return: 0.
 */

int main(int argc, char **argv)
{
	int file_2, file_f;
	ssize_t n_read, n_write;
	char *buffer;

	check_input(argc);
	buffer = malloc(1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	file_f = open(argv[1], O_RDONLY);
	n_read = read(file_f, buffer, 1024);
	if (file_f == -1 || n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	file_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (n_read > 0)
	{
		n_write = write(file_2, buffer, n_read);
		if (n_write == -1 || file_2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
	}
	close_file(file_f);
	close_file(file_2);
	free(buffer);
	return (0);
}
