#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: number 1
 * @b: number 2
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 numbers
 * @a: number 1
 * @b: number 2
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: number 1
 * @b: number 2
 * Return: product
 */

int op_mul(int a, int )
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: number 1
 * @b: number 2
 * Return: quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the modulus of 2 numbers
 * @a: num1
 * @b: num2
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
