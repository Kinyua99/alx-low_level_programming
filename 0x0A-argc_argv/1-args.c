#include <stdio.h>

/**
 * main - prints the no. of arguments passed to it
 * @argc: no. of comand line arguments
 * @argv: array of command line arguments
 * Return: 0 - success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
