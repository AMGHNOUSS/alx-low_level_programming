#include "main.h"
/**
 * read_textfile - read a text file and prints it to the POSIX standard output
 * @filename: String
 * @letters: NUmber
 * Return: NUmber
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	ssize_t fd, sz, wr;

	if (!filename)
		return (0);
	c = (char *)malloc(letters * sizeof(char));
	if (!c)
		return (0);
	fd = open(filename, O_RDONLY);
	sz = read(fd, c, letters);
	wr = write(STDOUT_FILENO, c, sz);
	if (wr < 0 || fd < 0 || sz < 0 || sz != wr)
	{
		free(c);
		return (0);
	}
	free(c);
	close(fd);
	return (wr);
}
