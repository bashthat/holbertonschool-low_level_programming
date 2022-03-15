#include "main.h"

/**
 * create_file - creates file
 * @filename: filename
 * @text_content: string
 * Return: one with success! neg one fail
 */
int create_file(const char *filename, char *text_content)
{
	int xy, star, i;

	if (filename == NULL)
		return (-1);

	xy = open(filename, O_CREAT | O_WRONLY | O_TRUNC | S_IWUSR);
	if (xy == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		;
		star = write(xy, text_content, i);
			if (star == -1)
				return (-1);
	}
	close(xy);
	return (1);
}
