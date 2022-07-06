#include "main.h"

/**
 * print_alphabet_x10 - function to print 10 times the alphabet
 *
 */

void print_alphabet_x10(void)
{
	char s, i;

	for (i = 0; i <= 9; i++)
	{
		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}
		_putchar('\n');
	}
}
