#include "main.h"

/**
 * print_square - prints square using #
 * @size: square size
 * Return: no return
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar(35);
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
