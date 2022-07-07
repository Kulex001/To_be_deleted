#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabets
 * @c: give letter
 *
 * Return: 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
