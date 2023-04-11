#include "main.h"

/**
 * main - entry point: copies from file1 to file2
 * @argc: arguments number
 * @argv: arguments
 * Return: always 0 at success otherwise -1
 */
void printerrors(char *message, char *filename, int exit_value);

int main(int argc, char *argv[])
{
	int fd_src, fd_dest, wr_byt, rd_byt;
	char *buf[1024];

	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s cp file_from file_to\n", argv[0]);
		exit(97);
	}
	fd_src = open(argv[1], O_RDONLY);
	if (fd_src == -1)
		printerrors("Error: Can't read from file", argv[1], 98);

	fd_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	
	if (fd_dest == -1)
		printerrors("Error: Can't write to", argv[2], 99);
	
	rd_byt = read(fd_src, buf, 1024);
	if (rd_byt == -1)
		printerrors("Error: Can't read from file", argv[1], 98);
	while (rd_byt > 0)
	{
		wr_byt = write(fd_dest, buf, rd_byt);

		if (wr_byt != rd_byt)
			printerrors("Error: Can't write to", argv[2], 99);
	}
	if (close(fd_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}

	if (close(fd_src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);
		exit(100);
	}
	close(fd_dest);
	close(fd_src);
	return (0);
}

/**
 * printerrors - prints errors message and exit
 * @message: error message
 * @filename: file the caused error
 * @exit_value: is the exit value
 */
void printerrors(char *message, char *filename, int exit_value)
{
	dprintf(STDERR_FILENO,"%s %s\n", message, filename);
	exit(exit_value);
}
