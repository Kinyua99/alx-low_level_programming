#include "main.h"

/**
 * _isdigit - cheecks whether input is a digit
 * @c: input number
 * Return: 1 if number, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
