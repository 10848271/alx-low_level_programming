#include <stdio.h>

/**
 * main - print first 50 fibonnaci numbers
 *
 * Return: 0
 */

int main(void)
{
	long int i, new, prev = 1, crnt = 2;

	printf("%li, %li, ", prev, crnt);
	for (i = 3; i < 51; i++)
	{
		new = crnt + prev;
		prev = crnt;
		crnt = new;
		printf("%li", new);
		if (i < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
