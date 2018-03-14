#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fdread;
	char *buffer;

	buffer = malloc(sizeof(char) * letters + 1);
	if (!filename)
		return (0);

	if (!buffer)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	fdread = read(fd, buffer, letters);
	if (fdread == -1)
		return (0);

	write(STDOUT_FILENO, buffer, fdread);
	close(fd);
	return (fdread);
}
