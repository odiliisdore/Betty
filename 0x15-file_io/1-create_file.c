#include "main.h"

/**
 * _strlen - return the lenght of a string
 * @s: the string whose lenght to check
 *
 * Return: integer lenght of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - creates a file with given text content
 * @filename: the name of the file to create
 * @text_content: A NULL - terminated string to write to the file
 *
 * Return: 1 on success, 0 on failure
 */
int create_file(const char *filename, char *text_context)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_context);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
	bytes = write(fd, text_context, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
