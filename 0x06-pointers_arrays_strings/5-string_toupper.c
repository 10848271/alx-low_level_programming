/**
 * string_toupper - changes all lowercase letters to uppercase
 * @ptr: pointer that holds the string
 * Return: pointer to the altered string
 */
char *string_toupper(char *ptr)
{
	int i = 0;

	const int upper = 32;

	while (ptr[i] != '\0')
	{
		if (ptr[i] > 96 && ptr[i] < 123)
		{
			ptr[i] = (ptr[i] - upper);
		}
		i++;
	}

	return (ptr);
}
