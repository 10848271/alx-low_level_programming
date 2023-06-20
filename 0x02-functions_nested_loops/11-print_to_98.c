#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting point of printing
 * Return: nothing
 */
void print_to_98(int n)
{
	while (1)
	{
		if (n <= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
			{
				printf("%d\n", n);
				break;
			}
			n++;
		}
		else
		{
			if (n != 98)
				printf("%d, ", n);
			else
			{
				printf("%d\n", n);
				break;
			}
			n--;
		}
	}
}
