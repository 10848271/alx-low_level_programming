/**
 * _strncat - concatenates two strings based on a counter
 * @dest: string to append to
 * @src: string to be appended
 * @n: counter that tells the number of src to copy
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
