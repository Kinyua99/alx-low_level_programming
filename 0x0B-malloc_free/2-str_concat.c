#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates 2 strings
 * @s1: String 1
 * @s2: String 2
 * Return: pointer to an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int i, j, k, lim;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	strout = malloc(sizeof(char) * (i + j + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		strout[k] = s1[k];

	lim = j;

	for (j = 0; j <= lim; k++, j++)
		strout[k] = s2[j];
	return (strout);
}
