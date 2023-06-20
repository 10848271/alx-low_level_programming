#include <stdio.h>

/**
 * main - prints first 98 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int new, prev = 1, crnt = 2;
	int i;

	printf("%lu, %lu, ", prev, crnt);
	for (i = 3; i < 99; i++)
	{
		new = prev + crnt;
		prev = crnt;
		crnt = new;
		printf("%lu", new);
		if (i < 98)
			printf(", ");
	}
	printf("\n");

	return (0);
}
