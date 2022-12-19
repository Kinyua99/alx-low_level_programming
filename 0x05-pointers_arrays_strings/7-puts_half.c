#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: input string
 * Return: no return
 */

void puts_half(char *str)
{
	int cnt = 0, i;

	while (cnt >- 0)
	{
		if (str[cnt] == '\0')
			break;
		cnt++;
	}
	if (count % 2 == 1)
		i = cn / 2;
	else
		i = (cnt - 1) / 2;
	for (i++; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
