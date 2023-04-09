#include "main.h"

/**
 * create_file - creates a file contains a NULL terminated string
 * @filename: the file to be created
 * @text_content: text that contains the file
 * Return: 1 at success, otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int written_bytes;

	if (!filename)
		return (-1);
	else if (filename)
	{
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
	}
	else
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		written_bytes = write(fd, text_content, strlen(text_content));

		if (written_bytes == -1)
		{
			close(fd);
			return (-1);
		}
		close(fd);
	}
	else
	{
		close(fd);
		return (-1);
	}
	return (1);
}
