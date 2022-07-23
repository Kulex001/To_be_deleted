#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints the number of arguements you passed into it
 * @argc: an argument count
 * @argv: an argument value
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
