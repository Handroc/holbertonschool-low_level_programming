#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters it could read and print
 *         0 if the file cannot be opened or read, or if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *tmp;
	ssize_t bytes_r;
	ssize_t bytes_w;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	tmp = malloc(sizeof(char) * letters);
	if (tmp == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_r = read(fd, tmp, letters);
	if (bytes_r == -1)
	{
		free(tmp);
		close(fd);
		return (0);
	}

	bytes_w = write(STDOUT_FILENO, tmp, bytes_r);

	free(tmp);
	close(fd);

	if (bytes_w == -1 || bytes_r != bytes_w)
		return (0);

	return (bytes_w);
}
