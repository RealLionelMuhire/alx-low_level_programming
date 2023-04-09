#include "main.h"
/**
 * read_textfile - reads the text file
 * @filename: is the name of the file to read
 * @letters: letters comprise the file
 * Return: the number of chars in the file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t br;
	ssize_t n, n_written;
	char buf[2000];

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	/*Open file for readinf*/
	if (fd == -1)
		return (0);

	/*read and print the file contents*/
	br = 0;

	while (br < letters)
	{
		n = read(fd, buf, sizeof(buf));
		if (n == -1)
		{
			close(fd);
			return (0);
		}
		else if (n == 0) 
			break;
		else
		{
			n_written = write(STDOUT_FILENO, buf, n);
			if (n_written == -1 || n_written != n)
			{
				close(fd);
				return (0);
			}
			br += n_written;
		}
	}
	close(fd);
	return (br);
}
