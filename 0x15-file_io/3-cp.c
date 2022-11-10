#include "main.h"

/**
 * main - copy the contents of one file to aanother
 * @argc: argument counter
 * @argv: argument value
 * Return: 0
 */
int main(int argc, char **argv)
{
	int from, to, r, written;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "USAGE: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);

	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "ERROR: CAN'T READ FILE FROM %s\x0a", argv[1]);
			free(buffer);
			exit(98);
		}

		written = write(to, buffer, r);
		if (to == -1 || written == -1)
		{
			dprintf(STDERR_FILENO, "ERROR: CAN'T WRITE FILE TO %s\x0a", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);

}

/**
 * create_buffer - function that create buffer
 * @file: file
 * Return: buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "ERROR: CAN'T WRITE FILE TO %s\x0a", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - function taht close file
 * @fd: fd
 * Return: void
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "ERROR CAN'T CLOSE TO fd %d\x0a", fd);
		exit(100);
	}
}
