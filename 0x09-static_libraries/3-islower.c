/**
 * _islower - checks for lowercase letters
 * @c: character to check
 * Return: 1 if lowercase or 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
