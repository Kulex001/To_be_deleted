#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse order of an array
 * @a: array
 * @n: size of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int x, y, s;

	y = n - 1;

	for (x = 0; x < n / 2; x++)
	{
		s = a[x];
		a[x] = a[y];
		a[y--] = s;
	}
}
