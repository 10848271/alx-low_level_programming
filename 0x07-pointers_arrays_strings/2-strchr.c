#include <stddef.h>

/**
 * _strchr - find first occurence of a character
 * @s: pointer to array
 * @c: character to search
 * Return: pointer to first occurence
 */

char *_strchr(char *s, char c)
{
	char *ptr = NULL;

	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
	}

	if (s[i] == c)
		ptr = &s[i];

	return (ptr);
}
