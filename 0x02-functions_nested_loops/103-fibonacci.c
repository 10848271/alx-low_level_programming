#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms,
 *	  followed by a new line
 *
 * Return: 0
 *
 */

int main(void)
{
	long int new, prev = 1, crnt = 2, sum = 2;

	new = prev + crnt;
	while (new < 4000000)
	{
		if (new % 2 == 0)
			sum += new;
		prev = crnt;
		crnt = new;
		new = prev + crnt;
	}
	printf("%li\n", sum);

	return (0);
}
