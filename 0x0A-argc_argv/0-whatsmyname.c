#include "holberton.h"
#include <stdio.h>

/**
* main - print the name of the file
* @argc: number for the caracther argv
* @argv: character for the print
* Return: Always 0
*/


int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s", argv[count]);
	}

	printf("\n");


	return (0);
}
