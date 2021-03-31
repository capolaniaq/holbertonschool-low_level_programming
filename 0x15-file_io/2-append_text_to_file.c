#include "holberton.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
* append_text_to_file - write in end of the file
* @filename: file to open
* @text_content: content respect in the new file
*
* Return: 1 on success, or -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file = 0;
	int bytes_written = 0;
	int i = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	while (*(text_content + i) != '\0')
		i++;

	bytes_written = write(file, text_content, i);

	if (bytes_written == -1)
		return (-1);
	return (1);
}
