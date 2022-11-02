#include "main.h"

/**
 * append_text_to_file - append text to end of file
 * @filename: name of the file
 * @text_content: text to append
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, length);
	if (fd == -1 || wr == -1)
		return (-1);
	close(fd);
	return (1);
}
