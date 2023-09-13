#include "function_pointers.h"

/**
 * print_name - prints a name using a function passed to it
 * @name:  the name to print
 * @f: the function to use to print
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
