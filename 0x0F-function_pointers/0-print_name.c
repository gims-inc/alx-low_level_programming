#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: string name
 * @f: callback
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (array == NULL || f == NULL)
		return;
	f(name);
}
