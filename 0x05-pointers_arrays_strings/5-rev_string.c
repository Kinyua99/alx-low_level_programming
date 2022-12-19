#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: no return
 */



void rev_string(char *s)
{
	int cnt, i, j;
	char temp;

	while (s[cnt] != '\0')
	{
		cnt++;
	}

	for (i = 0; j >= 0 && i < j; j--, i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}	
}
