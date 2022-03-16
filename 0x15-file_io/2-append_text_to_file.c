#include "main.h"
/**
 * append_text_to_file - append text to end of file
 * @filename: filename
 * @text_content: string for end of file
 * Return: exit success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int xz, star, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	xz = open(filename, O_APPEND | O_WRONLY);
	if (xz == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	star = write(xz, text_content, i);
	if (star == -1)
		return (-1);

	close(xz);
	return (1);
}
