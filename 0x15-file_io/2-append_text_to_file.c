#include "holberton.h"
int _strlen(const char *s);
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: input
 * @text_content: input
 * Return: integer .
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
	if ((fd ^-1) == 0)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	w = write(fd, text_content, _strlen(text_content));
	if ((w ^ -1) == 0)
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
