#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 == s2
 *	   -15 if s1 < s2
 *	   15 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int ret = 0; 
	long unsigned int i = 0, len = strlen(s1);

	if (strlen(s2) > len)
		len = strlen(s2);

	for (i = 0; i < len; i++)
	{
		if (s1[i] < s2[i])
			return (-15);
		else if (s1[i] > s2[i])
			return (15);
	}
	if (strlen(s1) > i)
		return (15);
	else if (strlen(s2) > i)
		return (-15);

	return (ret);
}
