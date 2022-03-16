#include "main.h"
/**
 * read_textfile - read textfile
 * @filename: string
 * @letters: letters
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int xy;
	char *z;
	ssize_t rc, wc;

	if (filename == NULL)
		return (0);
	xy = open(filename, O_RDWR);
	if (xy == -1)
		return (0);
	z = malloc(sizeof(char) * letters);
	if (z == NULL)
	{
		free(z);
		return (0);
	}

	rc = read(xy, z, letters);
	if (rc == -1)
		return (0);

	wc = write(STDOUT_FILENO, z, rc);
	if (wc == -1 || rc != wc)

		return (0);
	free(z);

	close(xy);
	return (wc);
}
