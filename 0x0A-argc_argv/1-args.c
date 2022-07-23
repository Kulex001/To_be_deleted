#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: argument count
 * @argv: argument value
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
