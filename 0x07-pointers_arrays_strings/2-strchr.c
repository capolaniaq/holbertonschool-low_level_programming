#include "holberton.h"

/**
*
*
*
*
*/

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++, s++)
	{
		if (*s == c)
			return(s);
	}

	return (0);

}
