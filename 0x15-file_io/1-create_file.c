#include "holberton.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
* create_file - print the content of the file
* @filename: file to open
* @text_content: content respect in the new file
*
* Return: 1 on success, or -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int newfile = 0;
	int bytes_written = 0;
	int i = 0;

	if (!filename)
		return (-1);

	newfile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (newfile == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (*(text_content +  i) != '\0')
			i++;
	}

	bytes_written = write(newfile, text_content, i);

	if (bytes_written == -1)
		return (-1);
	close(newfile);
	return (1);
}

