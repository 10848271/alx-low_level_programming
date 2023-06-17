#include <stdio.h>

/**
 * main - entry point for program
 * Return: 0 (Success)
 */

int main(void)
{
	int i, j, l;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (l = j + 1; l <= 9; l++)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(l + 48);

				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
