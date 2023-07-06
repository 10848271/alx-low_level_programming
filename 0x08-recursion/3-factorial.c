/**
 * factorial - calculate the factorial of a number
 * @n: number to find its factorial
 *
 * Return:
 *	the factorial of @n if n > 0
 *	-1 if n < 0
 *	1 if n = 0
 */

int factorial(int n)
{
	int fact;

	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	if (n > 1)
		fact = n * factorial(n - 1);

	return (fact);
}
