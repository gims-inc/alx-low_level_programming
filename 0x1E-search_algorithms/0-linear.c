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
	unsigned int c;
	unsigned int findex;

	if (array == NULL)
		return (-1);
	for (c = 0; c < size; c++)
	{
		printf("Value checked array[%d] = [%d] \n", c, array[c]);
		if (value == array[c])
		{
			findex = c;
			if (findex)
			return (findex);
		}
	}
	return (-1);
}
