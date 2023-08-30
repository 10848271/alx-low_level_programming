/**
 * _pow_recursion - calculate power of a number to another
 * @x: base number
 * @y: exponent
 *
 * Return:
 *	base raise to exponent if @y > 0
 *	-1 if @y < 0
 */

int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y > 0)
		result = x * _pow_recursion(x, y - 1);

	return (result);
}
