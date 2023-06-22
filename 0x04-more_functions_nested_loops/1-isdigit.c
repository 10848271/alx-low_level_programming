/**
 * _isdigit - checks for a digit
 * @c: character to be checked
 * Return: 1 if c is a digit
 *	   0 if c is not a digit
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
