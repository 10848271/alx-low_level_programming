#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * str_concat - adds a string to another
 * @s1: string to add to
 * @s2: string to be added
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1, len2, size, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		continue;
	for (len2 = 0; s2[len2]; len2++)
		continue;
	size = len1 + len2;
	concat = malloc((size * sizeof(char)) + 1);
	if (concat == NULL)
		return (NULL);
	while (i < len1)
	{
		concat[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		concat[i] = s2[j];
		i++;
		j++;
	}

	return (concat);
}
