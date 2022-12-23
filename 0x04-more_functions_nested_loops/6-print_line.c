#include "main.h"

/**
 * print_line - prints a straight line n times
 * @n: no of times the straight line is printed
 * Return: no return
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(95);
	_putchar('\n');
}
