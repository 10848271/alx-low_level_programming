#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenate strings
 * @s1: first string to use in concatenation
 * @s2: second string to use in concatenation
 * @n: number of s2 bytes to use in the concatenation
 *
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int size, l1, l2, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; s1[l1]; l1++)
		continue;
	for (l2 = 0; s2[l2] && l2 < n; l2++)
		continue;
	size = l1 + l2;
	concat = (char *)malloc(sizeof(char) * size);
	if (concat == NULL)
		return (NULL);
	for (; i < l1; i++)
		concat[i] = s1[i];
	for (; j < l2; j++, i++)
		concat[i] = s2[j];

	return (concat);
}
