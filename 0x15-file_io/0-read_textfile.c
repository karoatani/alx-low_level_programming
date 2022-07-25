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
	if (filename == NULL)
		return (0);

	int sz, rd;

	char *c = malloc(sizeof(char) * sizeof(letters));
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd == -1)
		return (0);
	rd = read(fd, c, letters);
	if (rd == -1)
		return (0);
	sz = write(1, c, rd);
	if (sz == -1)
		return (0);

	return (rd);
}
