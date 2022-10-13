#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two ints
 * @a: first int
 * @b: second int
 * Return: sum of a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub two ints
 * @a: first int
 * @b: second int
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two ints
 * @a: first int
 * @b: second int
 * Return: product of two ints
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two ints
 * @a: first int
 * @b: second int
 * Return: quotient of a and b
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
 * op_mod - modulus of two ints
 * @a: first int
 * @b: second int
 * Return: modulus of a and b
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
