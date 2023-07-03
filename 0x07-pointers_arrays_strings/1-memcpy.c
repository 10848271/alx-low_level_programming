/**
 * _memcpy - copies n bytes of memory to another location
 * @dest: destination location
 * @src: source location
 * @n: byte to copy
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
