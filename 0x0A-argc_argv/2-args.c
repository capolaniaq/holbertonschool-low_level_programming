#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - print the name of the file
* @argc: number for the caracther argv
* @argv: character for the print
* Return: Always 0
*/


int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
