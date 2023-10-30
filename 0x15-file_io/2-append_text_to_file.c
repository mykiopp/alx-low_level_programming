#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename of the pointer.
 * @text_content: added content to the end of the file.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int l, m, n = 0;

	if (filename == NULL)
		return (-1);

	l = open(filename, O_WRONLY | O_APPEND);

	if (l == -1)
		return (-1);

	if (text_content)
	{
		for (m = 0; text_content[m]; m++)
			;

		n = write(l, text_content, m);

		if (n == -1)
			return (-1);
	}

	close(l);

	return (1);
}
