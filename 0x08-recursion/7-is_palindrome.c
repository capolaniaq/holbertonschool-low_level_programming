#include "holberton.h"

/**
* palindrome - the function verify if the char s is palindrome
* @s: char for the value
* @start: is position initial for the s
* @final: is the last position in s
* Return: integer 1 or 0
*/

int palindrome(char *s, int start, int final)
{
	if (s[start] != s[final])
		return (0);
	else if (s[start] == s[final] && (start == final || final - start == 1))
		return (1);

	return (palindrome(s, start + 1, final - 1));
}

/**
* _strleng - retunrs the leng for the char s
* @s: char for the value
* Return: integer corresponding to the leng
*/

int _strleng(char *s)
{
	int i;

	i = 0;

	if (s[i] == '\0')
		return (i);

	return (i + 1 + _strleng(s + 1));
}

/**
* is_palindrome - return if the char s is palindrome
* @s: char for the value
* Return: integer 1 or 0
*/

int is_palindrome(char *s)
{
	int final;

	final = (_strleng(s)) - 1;
	return (palindrome(s, 0, final));
}
