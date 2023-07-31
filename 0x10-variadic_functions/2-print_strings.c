#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 * @separator: string to separate arguments
 * @n: numbr of parameters passed
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list opt;

	unsigned int i;

	char *str;

	va_start(opt, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(opt, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != 0 && i != n - 1)
			printf("%s", separator);
	}

	va_end(opt);
	printf("\n");
}
