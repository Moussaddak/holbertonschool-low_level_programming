#include "holberton.h"
int _strlen(const char *s);
/**
 * create_file - creates a file
 * @filename: input
 * @text_content: input
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fw, len = 0;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IREAD | S_IWRITE);
	if ((fd ^ -1) == 0)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	len = _strlen(text_content);
	fw = write(fd, text_content, len);
	if ((fw ^ -1) == 0)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
/**
 *_strlen - prints the length of a string
 *@s: input
 *Return: integer
 */
int _strlen(const char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
