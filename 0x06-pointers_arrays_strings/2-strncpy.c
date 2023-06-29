/**
 * _strncpy - copies one string into the other based on a counter.
 * @dest: where the string is to be copied to
 * @src: the string to be copied
 * @n: counter that specifies the number of characters to copy
 * Return: resulting pointer of the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n ; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
