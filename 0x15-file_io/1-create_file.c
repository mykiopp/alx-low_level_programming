#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename of a pointer.
 * @text_content: content written in the file.
 *
 * Return: 1 if it succeeded. -1 if it failed.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int l, m;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (l = 0; text_content[l]; l++)
		;

	m = write(fd, text_content, l);

	if (m == -1)
		return (-1);

	close(fd);

	return (1);
}
