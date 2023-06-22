#include <stdio.h>

int prime_checker(int);

/**
 * main - prints the largest prime factor of a number
 * Return: void
 */

int main(void)
{
	long int num = 612852475143; /*Number to find largest prime factor*/

	int p = 2; /*divisor starting from first prime*/

	int prime_status = 1; /*prime status*/

	int lpf = 2; /*hold the largest prime factor*/

	long int num1;

	num1 = num;

	while (num1 >= (p * p))
	{
		if (num1 % p == 0)
		{
			prime_status = prime_checker(p);

			if (prime_status)
			{
				num1 /= p;

				if (p > lpf)
				{
					lpf = p;
				}
				else
				{
					continue;
				}
			}
		}
		p++;
	}

	if (num1 > lpf)
		printf("%li\n", num1);
	else
		printf("%d\n", lpf);

	return (0);
}


/**
 * prime_checker - checks whether a number is a prime
 * @num: number to be checked
 * Return:
 *	1 if @num is prime
 *	0 if @num is prime
 */
int prime_checker(int num)
{
	int i = 2;

	int is_prime = 1;

	while (is_prime && i < num)
	{
		if (num % i == 0)
			is_prime = 0;
		i++;
	}

	return (is_prime);
}
