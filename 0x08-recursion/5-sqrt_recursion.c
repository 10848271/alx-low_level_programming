/**
 * _sqrt_helper - finds root of number using recursive
 * @n: number to find root
 * @dividend: number to test if its n's root
 *
 * Return: dividend or -1
 */
int _sqrt_helper(int n, int dividend)
{
	int root = dividend * dividend;

	if (root == n)
		return (dividend);
	if (root > n)
		return (-1);
	return (_sqrt_helper(n, dividend + 1));
}

/**
 * _sqrt_recursion - find natural root of a number
 * @n: number to find root
 *
 * Return: natural root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_helper(n, 1));
}
