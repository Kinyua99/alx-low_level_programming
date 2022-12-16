#include "main.h"

/**
 * _isdigit - checks if parameter is a digit between 0 and 9
 * @c: input parameter
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
