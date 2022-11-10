#include "main.h"

/**
 * read_textfile - Reads a text file and print to POSIX stdout.
 * @filename: Pointer to name of the file.
 * @letters: Number of letters function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, total, written;
	char *buffer;

	if (!filename || !letters)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	total = read(fd, buffer, letters);
	written = write(STDOUT_FILENO, buffer, total);

	if (fd == -1 || total == -1 || written == -1 || written != total)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	if (written != total)
		return (0);

	return (written);
}


