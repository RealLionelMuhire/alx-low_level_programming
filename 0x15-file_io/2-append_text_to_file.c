#include "main.h"

/**
 * append_text_to_file - appends a text at the end of file
 * @filename: a file
 * @text_content: string to be appended on a file
 * Return: 1 at success otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writen_bytes;

	if (!filename)
		return (-1);

	if (!text_content)
	{
		if (filename)
			return (1);
		else if (!filename)
			return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	writen_bytes = write(fd, text_content, strlen(text_content));
	if (writen_bytes == -1)
		return (-1);
	return (1);
}
