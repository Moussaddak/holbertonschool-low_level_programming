#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: input
 * @letters: number of bytes
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buf;

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(letters);
	if (!buf)
	{
		return (0);
	}
	else
	{
		r = read(fd, buf, letters);
		if ((r ^ -1) == 0)
		{
			return (0);
		}
		w = write(STDOUT_FILENO, buf, r);
		if ((w ^ -1) == 0 || (w ^ r) != 0)
		{
			free(buf);
			return (0);
		}
	}
	free(buf);
	close(fd);
	return (w);
}
