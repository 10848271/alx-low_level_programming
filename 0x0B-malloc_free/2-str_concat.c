#include <stdlib.h>
#include "main.h"

/**
 * str_concat - adds to strings together
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to concatenated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2, len, idx;
	char *c_str;

	if (!l1)
		return (l2);
	if (!l2)
		return (l1);
	if (!l1 && !l2)
		return ("");
	for (l1 = 0; s1[l1]; l1++)
		continue;
	for (l2 = 0; s2[l2]; l2++)
		continue;
	len = l1 + l2;
	c_str = malloc((sizeof(char) * len) + 1);
	if (!c_str)
		return (NULL);
	for (idx = 0; idx < l1; idx++)
		c_str[idx] = s1[idx];
	for (l1 = 0; idx < len; idx++, l1++)
		c_str[idx] = s2[l1];
	c_str[idx] = '\0';

	return (c_str);
}
