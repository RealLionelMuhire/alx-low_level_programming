#include "main.h"
/**
 * read_textfile - reads the text file
 * @filename: is the name of the file to read
 * @letters: letters comprise the file
 * Return: the number of chars in the file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_l, wr_l;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (!(buf || filename))
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	read_l = read(fd, buf, letters);

	if (read_l < 0)
	{
		close(fd);
		free(buf);
		return (0);
	}

	wr_l = write(STDOUT_FILENO, buf, read_l);

	if (wr_l == -1 || wr_l != read_l)
	{
		close(fd);
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (read_l);
}
