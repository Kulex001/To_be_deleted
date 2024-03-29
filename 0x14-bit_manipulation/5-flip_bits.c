#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: first number
 * @m: second number
 *
 * Return: number of bits flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, base;
	unsigned int count, i;

	count = 0;
	base = 1;
	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (base == (diff & base))
			count++;
		base <<= 1;
	}
	return (count);
}
