#include <string.h>

/**
* _strcmp - compare two strings
* @s1: string one
* @s2: string two
* Return: value of less caracters in ascii
*/

int _strcmp(char *s1, char *s2)
{
	int i, a;

	a = 0;
	i = 0;
	
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			i = s1[a] - s2[a];
			break;
		}
		a++;
	}

	return (i);
}
