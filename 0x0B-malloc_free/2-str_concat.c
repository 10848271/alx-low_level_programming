#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return:
 *	pointer to new string if success
 *	NULL if not sucess
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;

	int len1, len2, size, i = 0, num;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		continue;

	for (len2 = 0; s2[len2]; len2++)
		continue;

	size = len1 + len2 + 1;

	s3 = malloc(sizeof('a') * size);


	if (s3 == NULL)
		return (NULL);

	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}

	num = i;
	i = 0;

	while (i < len2)
	{
		s3[num + i] = s2[i];
		i++;
	}

	return (s3);
}
