#include "functions_pointers.h"

/**
 * array_iterator - executes a function given as par
 * on each element of an array
 * @size: array size
 * @action: pointer to function
 * @array:integer array
 * Return: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[]);
}
