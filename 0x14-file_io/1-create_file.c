#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: the content within the file
 * Return: 1 on success else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fdwrite;
	int count = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR, O_CREAT, O_TRUNC, S_IRUSR, S_IWUSR);
	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	while (text_content[count])
	{
		count++;
	}
	count++;

	fdwrite = write(fd, text_content, count);
	if (fdwrite == -1)
		return (-1);

	close(fd);
	return (1);
}
