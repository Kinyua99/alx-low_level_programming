#include "main.h"

/**
 * puts2 - prints one character out of 2 of a string
 * @str: input string
 * Return: no return
 */

void puts2(char *str)
{
	int cnt = 0;

	while (cnt >= 0)
	{
		if (str[cnt] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (cnt % 2 == 0)
			_putchar(str[cnt]);
		cnt++;
	}
}
