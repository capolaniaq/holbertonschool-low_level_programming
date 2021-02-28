#include "holberton.h"
#include <stdio.h>

/**
* main - print argcñ
* @argc: numbers for the characters
* @argv: char for the compare
* Return: always 0
*/

int main(int argc, char *argv[])
{
	if (argc != 0 && argv != '\0')
	{
	printf("%d", argc);
	}

	printf("\n");

	return (0);
}
