#include "main.h"
/**
 * append_text_to_file - appands text at end of a file
 * @filename: file name
 * @text_content: text
 * Return: 1 on success -1 on faillure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written, length = 0;

	if (!filename)
		return (-1);

	if (text_content)
		length = strlen(text_content);

	fd = open(filename, O_WRONLY | O_APPEND);
	written = write(fd, text_content, length);

	if (fd == -1 || written == -1)
		return (-1);

	close(fd);

	return (1);
}

