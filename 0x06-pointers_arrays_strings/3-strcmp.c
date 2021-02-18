#include <string.h>

/**
* _strcmp - compare two strings
* @s1: string one
* @s2: string two
* Return: value of less caracters in ascii
*/

int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;

	if (s1[a] != s2[a])
		a = s1[a] - s2[a];

	return (a);
}
