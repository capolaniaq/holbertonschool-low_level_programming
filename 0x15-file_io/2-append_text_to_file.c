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
	int file_add = 0;
	int i = 0;

	if (filename == NULL)
		return (-1);

	file_add = open(filename, O_WRONLY | O_APPEND);

	if (file_add == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
	}

	write(file_add, text_content, i);

	return (1);
}
