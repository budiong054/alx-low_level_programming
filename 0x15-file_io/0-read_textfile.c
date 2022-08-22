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
	ssize_t byte;
	char buf[66678];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	byte = read(fd, buf, letters);

	close(fd);
	buf[byte + 1] = '\0';
	byte = write(STDOUT_FILENO, buf, letters);
	if (byte == -1)
		return (0);

	return (byte);
}
