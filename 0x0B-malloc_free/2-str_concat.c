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
	unsigned int len1, len2, i = 0, j = 0;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	len1 = strlen(s1);
	len2 = strlen(s2);
	concat = malloc(((len1 + len2) * sizeof(char)) + 1);
	if (len1 + len2 != 0)
	{
		while (len1 != 0 && i < len1)
		{
			concat[i] = s1[i];
			i++;
		}
		while (len2 != 0 && j < len2)
		{
			concat[i] = s2[j];
			i++;
			j++;
		}
		concat[i] = '\0';
	}
	else
	{
		concat[j] = '\0';
	}

	return (concat);
}
