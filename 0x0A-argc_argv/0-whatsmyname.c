#include <stdio.h>

/**
 * main - prints name of function followed by new line
 * @argc: number of command line arguments
 * @argv: array of program command line arguments
 * Return: 0 _ success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
