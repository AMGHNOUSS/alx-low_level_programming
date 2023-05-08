#include "main.h"
/**
 * create_file - Create a file
 * @filename: String
 * @text_content: String
 * Return: Integer
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		wr = write(fd, text_content, sizeof(char) * strlen(text_content));
		if (wr < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
