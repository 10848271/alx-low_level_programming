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
	va_list opt;

	int sum, num;

	unsigned int i;

	va_start(opt, n);

	if (n == 0)
		return (0);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		num = va_arg(opt, int);
		sum += num;
	}

	return (sum);
}
