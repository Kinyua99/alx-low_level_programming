#include "main.h"

/**
 * _strpbrk - searches for any set of bytes in a string
 * @s: first string
 * @accept: second string
 * Return: pointer to byte in s that matches one of the
 * bytes in accept, or NULL if none is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
