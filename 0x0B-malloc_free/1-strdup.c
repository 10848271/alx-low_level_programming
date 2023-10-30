#include <stdlib.h>
#include "main.h"

/**
 * _strdup - creates array of a duplicate string
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	int str_len, idx;
	char *d_str;

	if (!str)
		return (NULL);
	for (str_len = 0; str[str_len]; str_len++)
		continue;
	d_str = malloc(sizeof(char) * str_len);
	if (!d_str)
		return (NULL);
	for (idx = 0; idx < str_len; idx++)
		d_str[idx] = str[idx];

	return (d_str);

}
