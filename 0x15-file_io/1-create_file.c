#include "main.h"

size_t _strlen(char *str);
/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, flag;
	size_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT, 0600);

	if (fd == -1)
		return (-1);
	if (text_content)
	{
		len = _strlen(text_content);
		flag = write(fd, text_content, len);

		if (flag == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

/**
 * _strlen - get the length of a string
 * @str: pointer to the string
 *
 * Return: the string length
 */

size_t _strlen(char *str)
{
	size_t len = 0;

	while (str[len])
		len++;
	return (len);
}
