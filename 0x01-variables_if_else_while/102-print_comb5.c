#include <stdio.h>

/**
 * main - print all combination os two-digit numbers
 * Return: 0
 */

int main(void)
{
	int i, j, quo = 0, rem = 0;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			quo = i / 10;
			rem = i % 10;
			putchar(quo + 48);
			putchar(rem + 48);
			putchar(' ');
			quo = j / 10;
			rem = j % 10;
			putchar(quo + 48);
			putchar(rem + 48);
			if (j == 99 && i == 98)
			{
				putchar('\n');
				continue;
			}
				putchar(',');
				putchar(' ');
		}
	}

	return (0);
}
