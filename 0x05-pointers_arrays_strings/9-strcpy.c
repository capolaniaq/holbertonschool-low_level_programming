#include "holberton.h"

/**
* _strcpy - reset of the n a 98
* @dest: array inside for the before function
* @src: total the characters of the string
*
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; c >= 0; c++)
	{
		src[c] = dest[c];

		if (src[c] == '\0')
		{
			return (dest);
		}

	}



	return (dest);

}
