#include "holberton.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
* read_textfile - print the content of the file
* @filename: file to open
* @letters: letter how many characters to print
*
* Return: ssize_t
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, lprint, lread, closed;
	char *buffer;

	file = 0;
	lprint = 0;
	lread = 0;
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	if (!filename)
		return (0);

	file = open(filename, O_RDWR);

	if (file == -1)
		return (0);

	lread = read(file, buffer, letters);

	if (lread == -1)
		return (0);

	lprint = write(STDOUT_FILENO, buffer, lread);

	if (lprint == -1)
		return (0);

	closed = close(file);

	if (closed == -1)
		return (0);

	free(buffer);
	return (lread);
}
