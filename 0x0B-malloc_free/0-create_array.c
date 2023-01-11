#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: stored char
 * Return: pointer of array
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	insigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		cr[i] = c;
	return (cr);
}
