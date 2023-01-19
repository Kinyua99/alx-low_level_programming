#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: input name
 * @f: fointer function
 * Return: no ret
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
