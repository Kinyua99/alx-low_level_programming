#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: no return
 */



void rev_string(char *s)
{
	int cnt, i, j;
	char *str, temp;

	while (s[cnt] != '\0')
	{
		cnt++;
	}
	str =  s;

	for (i = 1; i < cnt; i++)
	{
		str++;
	}
	for (j = 0; j < (cnt / 2); j++)
	{
		temp = s[j];
		s[j] = *str;
		*str = temp;
		str--;
	}
}
