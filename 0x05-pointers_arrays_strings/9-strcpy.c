#include "main.h"

/**
 * _strcpy - copies string pointed by src,
 * includes the terminating null byte, to the
 * buffer pointed by dest.
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int cnt = 0;

	while (cnt >= 0)
	{
		*(dest + cnt) = *(src + cnt);
		if (*(src + cnt) == '\0')
			break;
		cnt++;
	}
	return (dest);
}
