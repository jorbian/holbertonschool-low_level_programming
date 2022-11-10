#include "main.h"

#define O_RDONLY 00
#define O_WRONLY 01
#define O_RDWR 02
#define STDOUT_FILENO 00

/**
 * read_textfile - Reads a text file and print to POSIX stdout.
 * @filename: Pointer to name of the file.
 * @letters: Number of letters function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opened, readd, written;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	opened = open(filename, O_RDONLY);
	readd = read(opened, buffer, letters);
	written = write(STDOUT_FILENO, buffer, readd);

	if (opened == -1 || readd == -1 || written == -1 || written != readd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(opened);

	return (written);
}