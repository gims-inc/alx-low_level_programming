#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array pointer
 * @size: aaray size, number of elements
 * @cmp: callback -for comparing
 * Return: Index of first element from callback function or -1
 * if no matches and 0 if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
