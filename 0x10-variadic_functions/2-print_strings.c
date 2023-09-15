#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - prints string argument
 * @separator: string to print between arguments
 * @n: number of arguments passed
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *arg;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, char *);
		if (i != n - 1)
		{
			if (separator != NULL && arg != NULL)
				printf("%s%s", arg, separator);
			else if (separator != NULL && arg == NULL)
				printf("(nil)%s", separator);
			else if (separator == NULL && arg != NULL)
				printf("%s", arg);
			else
				printf("(nil)");
		}
		else
		{
			if (arg != NULL)
				printf("%s", arg);
			else
				printf("(nil)");
		}
	}
	va_end(args);
	printf("\n");
}
