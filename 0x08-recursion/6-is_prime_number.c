#include "holberton.h"

/**
* _prime - variable to the count square root
* @n: integer for the square root
* @i: integer countable
* Return: integer
*/

int _prime(int n, int i)
{

	if (n == 1 || n < 0)
		return (0);
	if (n % i == 0 && i != n)
		return (0);
	else if (n % i == 0 && i == n)
		return (1);


	return (_prime(n, i + 1));
}

/**
* is_prime_number - returns the natural square root of a number.
* @n: integer for the square root
* Return: integer
*/

int is_prime_number(int n)
{
	return (_prime(n, 2));
}
