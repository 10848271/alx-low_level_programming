/**
 * cap_string - capiltalizes all words of a string
 * @ptr: pointer holding the string
 * Return: pointer to the modified string
 */
char *cap_string(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] == ' ' || ptr[i] == '\t' ||
				ptr[i] == '\n' || ptr[i] == ','
				|| ptr[i] == ';' ||
				ptr[i] == '.' || ptr[i] == '!' ||
				ptr[i] == '?' || ptr[i] == '"' ||
				ptr[i] == '(' || ptr[i] == ')' ||
				ptr[i] == '{' || ptr[i] == '}')
		{
			if (ptr[i + 1] > 96 && ptr[i + 1] < 123)
			{
				ptr[i + 1] = ptr[i + 1] - 32;
				i++;
			}
		}
	}

	return (ptr);
}
