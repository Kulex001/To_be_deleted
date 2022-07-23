#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - c takes 2 argument
 * @argc: argument count
 * @argv: argument value
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int x;
	int mult = 0;
	int y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		mult = x * y;
		printf("%d\n", mult);
		return (0);
	}
}
