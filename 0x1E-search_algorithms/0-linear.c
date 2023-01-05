#include "search_algos.h"

/**
 * linear_search -Searches fo a value in an array
 *  using Linear Search algorithm.
 * @array: pointer to the array
 * @size: -number of elements in the array
 * @value: -the value to search for
 * Return: first index where val is located
 */

int linear_search(int *array, size_t size, int value)
{
	int c;

	if (array == NULL)
		return (-1);
	for (c = 0; c < (int)size; c++)
	{
		printf("Value checked array[%u] = [%d] \n", c, array[c]);
		if (value == array[c])
		{
			return (c);
		}
	}
	return (-1);
}
