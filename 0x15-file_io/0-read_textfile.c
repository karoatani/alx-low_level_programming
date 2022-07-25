#include "main.h"
/**
 * read_textfile- read text file
 *
 * @filename: filename
 * @letters: letters
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (!filename)
		return (0);

	int sz, rd, fd;
	char *c;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	if (!c)
		return (0);
	rd = read(fd, c, letters);
	if (rd == -1)
		return (0);
	sz = write(1, c, rd);
	if (sz == -1)
		return (0);
	close(fd);
	free(c);
	return (sz);
}
