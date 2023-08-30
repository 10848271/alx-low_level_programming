/**
 * _prime_finder - recursively divides to checker if prime
 * @n: number to check prime
 * @dividend: number to divide by
 *
 * Return: 1 or 0
 */
int _prime_finder(int n, int dividend)
{
	if (dividend == 1)
		return (1);
	if (n % dividend == 0)
		return (0);
	return (_prime_finder(n, dividend - 1));
}

/**
 * is_prime_number - finds prime number of an integer
 * @n: number to check if its prime
 *
 * Return: 1 if n is prime or 0 if not
 */
int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n < 0)
		return (0);
	return (_prime_finder(n, n - 1));
}
