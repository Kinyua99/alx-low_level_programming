#include <stdio.h>

/**
 * main - prints largest prime factor
 * Return: always0
 */

int main(void)
{
	long int n = 612852475143, pf;

	for (pf = 2; pf <= n; pf++)
	{
		if (n % pf == 0)
		{
			n /= pf;
			pf--;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
