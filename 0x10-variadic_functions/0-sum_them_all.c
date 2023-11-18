#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums are parameters it receives
 * @n: named parameter
 * @...: optional parameters
 *
 * Return: Sum of n and all ...
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int num, sum = 0;
	unsigned int i;

	if (n == 0)
		return (n);

	va_start(args, n);
	for (i=0; i<n;i++)
	{
		num = va_arg(args, int);
		sum += num;
	}

	return (sum);
}
