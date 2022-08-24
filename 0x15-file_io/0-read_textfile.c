#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: address of the filename
 * @letters: number of letters it should read and print
 *
 * Return: return 0 if file cannot be opened or read, if filename is NULL
 * or if write fails or doesnot write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t byte, s;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	s = read(fd, buf, letters);
	if (s == -1)
	{
		free(buf);
		return (0);
	}
	buf[s] = '\0';

	close(fd);

	byte = write(STDOUT_FILENO, buf, s);
	if (byte == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (byte);
}
