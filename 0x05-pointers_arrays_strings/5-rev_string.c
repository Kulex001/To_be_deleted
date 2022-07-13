#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	char c;
	int x, l1, l2;

	l1 = 0;
	l2 = 0;
	while (s[l1] != '\0')
		l1++;

	l2 = l1 - 1;
	for (x = 0; x < l1 / 2; x++)
	{
		c = s[x];
		s[x] = s[l2];
		s[l2] = c;
		l2 -= 1;
	}
}
