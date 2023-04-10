#include "main.h"

/**
 * main - entry point: copies from file1 to file2
 * @argc: arguments number
 * @argv: arguments
 * Return: always 0 at success otherwise -1
 */


int main(int argc, char *argv[])
{
	int fd_src, fd_dest, wr_byt, rd_byt;
	char *buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s cp file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_src = open(argv[1], O_RDONLY);
	rd_byt = read(fd_src, buf, 1024);

	if (fd_src == -1 || rd_byt == -1 || !argv[1])
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	wr_byt = write(fd_dest, buf, 1024);
	if (fd_dest == -1 || wr_byt == -1 || !argv[2])
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	if (close(fd_src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);
		exit(100);
	}
	else if (close(fd_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}
	return (0);

}
