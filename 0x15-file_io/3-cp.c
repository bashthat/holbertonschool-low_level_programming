#include "main.h"
/**
 * main - function to copy file from and to.
 * @argc: number of args to the function
 * @argv: pointer
 * Return: success
 */

int main(int argc, char *argv[])
{
	int fd_f, fd_to, fd_read, close1, close2;
	char arr[1024], e1[] = "Error: Can't read from file";
	char e2[] = "Error: Can't write to";

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_f = open(argv[1], O_RDONLY);
	if (fd_f < 0)
	{
		dprintf(STDERR_FILENO, "%s %s\n", e1, argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "%s %s\n", e2, argv[2]);
		exit(99);
	}
	while ((fd_read = read(fd_f, arr, 1024)) > 0)
	{
		if (write(fd_to, arr, fd_f) != fd_read)
		{
			dprintf(STDERR_FILENO, "%s %s\n", e2, argv[2]);
			exit(98);
		}
	}
	close1 = close(fd_f);
	close2 = close(fd_to);
	if ((close1 == -1) || (close2 == -1))

	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE, %s\n", argv[1]);
		exit(100);
	}
	return (0);
}
