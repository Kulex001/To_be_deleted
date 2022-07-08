#include "main.h"
/**
 * _isdigit - function that checks for a digit
 * @c: the int for the paramaters of my function
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{

	char i;
	int isdigit = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
