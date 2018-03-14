#include "holberton.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: the name of the file
 * @text_content: the content of the file
 * Return: 1 on success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fdwrite;
	int count = 0;

	while (text_content[count])
	{
		count++;
	}
	count++;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	fdwrite = write(fd, text_content, count);
	if (fdwrite == -1)
		return (-1);

	close(fd);
	return (1);
}
