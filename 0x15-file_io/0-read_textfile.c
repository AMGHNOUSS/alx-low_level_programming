#include "main.h"
/**
 * read_textfile - read a text file and prints it to the POSIX standard output
 * @filename: String
 * @letters: NUmber
 * Return: NUmber
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *c;
	ssize_t sz, wr;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	c = (char *)malloc(letters);
	sz = read(fd, c, letters);
	if (sz == 0)
		return (0);
	wr = write(1, c, sz);
	if (wr == 0)
		return (0);
	close(fd);
	free(c);
	return (wr);
}
