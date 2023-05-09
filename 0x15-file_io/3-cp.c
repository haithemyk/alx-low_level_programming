#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 1024

/**
 * main - program entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, otherwise exit with status codes 97-100
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, n_read, n_written;
	char buf[BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	do {
		n_read = read(fd_from, buf, BUF_SIZE);
		if (n_read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		n_written = write(fd_to, buf, n_read);
		if (n_written == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	} while (n_read == BUF_SIZE);

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
