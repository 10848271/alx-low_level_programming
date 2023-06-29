/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to array
 * @n: size of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, num;

	for (i = 0, j = n - 1; i != j - 1 && i != j; i++, j--)
	{
		num = a[i];
		a[i] = a[j];
		a[j] = num;	
	}
}
