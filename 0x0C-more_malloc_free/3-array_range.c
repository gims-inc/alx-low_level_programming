#include "main.h"
/**
 * array_range - create an array of integers with min and max values
 * @min: min value
 * @max: max value
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		p[i] = min;

	return (p);
}
