#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters which are STDOUT.
 * @filename: filename being read.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed or read. If it fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t l;
	ssize_t m;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	l = read(fd, buf, letters);
       	m = write(STDOUT_FILENO, buf, l);

	free(buf);

	close(fd);

	return (m);
}
