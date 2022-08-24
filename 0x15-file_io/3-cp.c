#include "main.h"


ssize_t read_and_copy(char *file_from, char *file_to);
/**
 * main - copies the content of a file to another file
 * @ac: number of program argument
 * @av: pointer to the program string
 *
 * Return: 0 on success
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}


	read_and_copy(av[1], av[2]);

	return (0);
}

/**
 * read_and_copy - reads a content from one file and copies its to another
 * @file_from: address of the file source
 * @file_to: address of the file destination
 *
 * Return: The number of byte
 */

ssize_t read_and_copy(char *file_from, char *file_to)
{
	int src_fd, dest_fd, fd;
	ssize_t src_rd, byte;
	char *buf;

	src_fd = open(file_from, O_RDONLY);
	if (src_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	buf = malloc(sizeof(char) * BUFF_SIZE);
	if (!buf)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	src_rd = read(src_fd, buf, BUFF_SIZE);
	if (src_rd < 0)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	buf[src_rd] = '\0';

	dest_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd < 0)
	{
		close(src_fd);
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	byte = write(dest_fd, buf, src_rd);
	if (byte < 0)
	{
		close(src_fd);
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	fd = close(src_fd);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	fd = close(dest_fd);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	free(buf);
	return (byte);
}
