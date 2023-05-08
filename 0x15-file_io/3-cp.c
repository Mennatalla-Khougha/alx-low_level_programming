#include "main.h"

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
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_f = open(argv[1], O_RDONLY);
	if (file_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_2 = open(argv[2], O_CREAT | O_WDONLY | O_TRUNC, 0664);
	while ((n_read = read(file_f, buffer, 1024)) > 0)
	{
		n_write = write(file_2, buffer, n_read);
		if (n_write == -1 || file_2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(file_f) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %d\n", file_f);
		exit(100);
	}
	if (close(file_2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %d\n", file_2);
		exit(100);
	}
	return (0);
}
