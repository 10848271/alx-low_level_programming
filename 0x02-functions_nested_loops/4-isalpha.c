/**
 * _isalpha - checks for alphabetic characters
 * @c: character to be checked
 * Return: 1 if c is letter, lowercase, or uppercase
 *	   0 if c is not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
