#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check main
 * @argc: argument counter
 * @argv: argument value
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
