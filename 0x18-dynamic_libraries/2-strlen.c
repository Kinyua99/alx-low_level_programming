#include "main.h"

/**
 * _strlen- returns the length of the string
 * @s: input string
 * Return: returns the string length
 */

int _strlen(char *s)
{
	int cnt = 0;

	while (*(s + cnt) != '\0')
	{
		cnt++;
	}
	return (cnt);
}
