int _palindrome_checker(char *str, int left, int right);

/**
 * is_palindrome - finds palindrome strings
 * @s: string to check
 *
 * Return: 1 if palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	int len = 0;
	char *str = s;

	if (!s)
		return (0);
	if (*s == '\0')
		return (1);
	while (*str)
	{
		len += 1;
		str++;
	}
	return (_palindrome_checker(s, 0, len - 1));

	return (0);
}

/**
 * _palindrome_checker - checks palindrome
 * @str: string to check
 * @left: left index
 * @right: right index
 *
 * Return: 1 or 0
 */
int _palindrome_checker(char *str, int left, int right)
{
	if (str[left] != str[right])
		return (0);
	if (left > right)
		return (1);
	if (str[left] == str[right])
		return (_palindrome_checker(str, left + 1, right - 1));
	return (0);
}
