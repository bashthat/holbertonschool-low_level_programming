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
	char z;
	ssize_t fdr, fdw, fdc;

	if (filename == NULL)
		return (0);
	xy = open(filename, O_RDONLY);
	if (xy < 0)
		return (0);
	z = malloc(letters);
	if (z == NULL)
		return (0);
	fdr = read(xy, z, letters);
	if (fdr < 0)
	{
		free(z);
		return (0);
	}
	fdw = write(STDOUT_FILENO, z, fdr);
	if (fdw < 0)
	{
		free(z);
		return (0);
	}
	fdc = close(xy);
	if (fdc < 0)
	{
		free(z);
		return (0);
	}
	free(z);
	return (fdr);
}
