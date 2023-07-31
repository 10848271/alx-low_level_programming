#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sums two integers
 * @a: first integer
 * @b: second number
 *
 * Return:
 *	a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - substract two integers
 *@a: first integer
 *@b: second number
 *
 *Return:
 *	a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two intgers
 * @a: first integer
 * @b: second integer
 *
 * Return:
 *	a * b
 *
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first number
 * @b: second number
 *
 * Return:
 *	a/b if b > 0
 *	exit 100
 *
 */

int op_div(int a, int b)
{
	if (b > 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - modulo of two numbers
 * @a: first number
 * @b: second number
 *
 * Return:
 *	a % b if b > 0
 *	exit 100 if b <= 0
 *
 */

int op_mod(int a, int b)
{
	if (b > 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
