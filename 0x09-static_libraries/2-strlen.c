/**
 * _strlen - calculates the lenght of a string
 * @s: pointer to the string
 * Return: lenght of the string s
 */
int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}

	return (size);
}
