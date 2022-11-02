#include "main.h"

/**
 * read_textfile - read a textfile and print to stdout
 * @filename: name of the file
 * @letters: number of letters to print
 * Return: number of letters it should print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	rd = read(fd, buff, letters);
	wr = write(1, buff, rd);

	if (rd == -1 || wr == -1 || wr != rd)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (wr);
}
