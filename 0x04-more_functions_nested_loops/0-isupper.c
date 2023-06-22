/**
 * _isupper - checks for uppercase character
 * @c: holds the character to be checked
 * Return: 1 if c is uppercase
 *	   0 if c in not uppercase
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
