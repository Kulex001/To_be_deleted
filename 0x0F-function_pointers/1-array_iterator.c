#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: array to be targeted
 * @size: size of the array
 * @action: function to be executed
 * parameter on each element of an array.
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (action == NULL || array == NULL)
		return;
	for (x = 0; x < size; x++)
		action(array[x]);
}
