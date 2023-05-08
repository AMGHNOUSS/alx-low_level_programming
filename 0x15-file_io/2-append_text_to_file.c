#include "main.h"
/**
 * append_text_to_file - append text at the end of a file
 * @filename: String
 * @text_content: String
 * Return: Integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_RDWR);
	if (fd < 0)
		return (-1);
	if (text_content)
		wr = write(fd, text_content, strlen(text_content));
	if (wr == -1)
		return (-1);
	return (1);
}
