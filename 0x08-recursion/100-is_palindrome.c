#include <stddef.h>

/**
 * _strlen - Returns the length of a string
 * @s: The input string
 *
 * Return: The length of the string
 */
size_t _strlen(const char *s)
{
	size_t length = 0;

	while (s[length])
		length++;

	return (length);
}

/**
 * is_palindrome_helper - Recursive helper function
 * to check if a string is a palindrome
 * @s: The input string
 * @start: The starting index of the substring
 * @end: The ending index of the substring
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise
 */
int is_palindrome_helper(const char *s, size_t start, size_t end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome using recursion
 * @s: The input string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	size_t len = _strlen(s);

	if (len == 0)
		return (1);

	return (is_palindrome_helper(s, 0, len - 1));
}
