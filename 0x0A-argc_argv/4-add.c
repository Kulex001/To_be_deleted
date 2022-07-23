#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that adds positive number
 * @argc: an argument count
 * @argv: an argument value
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	int add = 0;
	int i, j;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		j = atoi(argv[argc]);
		add += j;
	}
	printf("%d\n", add);
	return (0);
}
