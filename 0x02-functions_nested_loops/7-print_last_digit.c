#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a num
 * @c: the num passed
 *
 * Return: the last digit
 */
int print_last_digit(int c)
{
	if (c > 0 || c == 0)
	{
		_putchar (c % 10 + '0');
		return (c % 10);
	}
	else
	{
		c = c * 1;
		_putchar (c % 10 + '0');
		return (c % 10);
	}
}
