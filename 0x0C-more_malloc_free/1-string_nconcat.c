#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string to be concatenated to
 * @s2: string to concatenate
 * @n: size of s2 to concatenate to s1
 * Return: pointer to concatenated string or
 *	   NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str; /* will hold address of concatenation */

	unsigned int idx = 0; /* to ensure n char is read */

	unsigned int len_s1; /* length of s1 */

	/* checks for empty strings */
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	len_s1 = strlen(s1);

	/* allocate memory for concatenation results */
	str = (char *)malloc(len_s1 * (n + 1));
	if (!str)
		return (NULL);

	/* looping over s1 and store in str */
	for (; idx < len_s1; idx++)
		str[idx] = s1[idx];

	/* looping over s2 and keeping count */
	for (idx = 0; idx < n && s2 != NULL; idx++, s2++)
		str[len_s1 + idx] = *s2;
	str[len_s1 + idx] = '\0';

	return (str);
}
