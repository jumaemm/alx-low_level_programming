#include "main.h"
#include <stdio.h>

/**
 * error_handler - handles any I/O errors
 * @e: error value
 * @filename: name of the file
 * Return: Always nothing
 */
void error_handler(int e, char *filename)
{
	if (e == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (e == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * cp - copy from one file to another
 * @src: source filename
 * @dest: destination filename
 * Return: 1 or -1
 */
void cp(char *src, char *dest)
{
	int fd, fd_dest, rd, wr, cl;
	char *buff[1024];

	fd = open(src, O_RDONLY);

	if (fd == -1)
	{
		error_handler(98, src);
	}
	fd_dest = open(dest, O_CREAT | O_RDONLY | O_TRUNC, 0644);
	if (fd_dest == -1)
	{
		close(fd);
		error_handler(99, dest);
	}
	do {
		rd = read(fd, buff, 1024);
		if (rd == -1)
		{
			error_handler(98, src);
		}
		wr = write(fd_dest, buff, rd);
		if (wr == -1)
			error_handler(99, dest);
	} while (wr == 1024);
	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		close(fd_dest);
		exit(100);
	}
	cl = close(fd_dest);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}
}

/**
 * main - copy contents of one file to another
 * @argc: count of args
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);
}
