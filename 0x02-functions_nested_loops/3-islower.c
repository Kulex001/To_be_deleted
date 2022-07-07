#include "main.h"
#include <ctype.h>
/**
 * _islower - function to check for lowercase character
 * @c: ascii char to check
 *
 * return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
