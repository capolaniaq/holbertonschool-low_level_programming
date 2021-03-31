#include "holberton.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
* main - funtion that copy a file exits
* @argc: number of the characters
* @argv: names of the file exist and copy
*
* Return: int 0;
*/

int main(int argc, const char *argv[])
{
	int file_from;
	int file_to, lread = 1024, lwrite;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (lread == 1024)
	{
		lread = read(file_from, buffer, 1024);
		if (lread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		lwrite = write(file_to, buffer, lread);
		if (lwrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	closed(close(file_from), file_from);
	closed(close(file_to), file_to);
	return (0);
}

/**
* closed - function that closed file open
* @i: integer correspond to the return close
* @j: integer correspond to the retunr open
*
* Return: void
*/

void closed(int i, int j)
{
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", j);
		exit(100);
	}
}
