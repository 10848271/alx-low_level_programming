int _sqrt_helper(int, int);

/**
 * int _sqrt_recursion - find natural root of a number
 * @n: number to find the natural root for
 *
 * Return: natural root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0 && n == 1)
		return n;
	if (n < 0)
		return -1;
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - finds natural root using recursive
 * @n: number to find natural root
 * @dividend: number to test if it is square root
 *
 * Return: dividend or -1
 */
int _sqrt_helper(int n, int dividend)
{
	if (dividend * dividend == n)
		return dividend;
	if (dividend * dividend > n)
		return -1;
	return (_sqrt_helper(n, dividend + 1));
}
