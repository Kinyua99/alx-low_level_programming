#include "main.h"

/**
 * _print_rev - prints a string in reverse, followed by a new line
 * @s: input string
 * Return: no return
 */

void print_rev(char *s)
{
	int cnt = 0;

	while (cnt >= 0)
	{
		if (s[cnt] == '\0')
			break;
		cnt++;
	}
	for (cnt--; cnt >= 0; cnt--)
		_putchar(s[cnt]);
	_putchar('\n');
}
