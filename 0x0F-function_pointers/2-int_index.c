#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input array
 * @size: array size
 * @cmp: pointer to function
 * Return: index of first element for which cmp does not return 0,
 * for size <= 0 or no match, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
