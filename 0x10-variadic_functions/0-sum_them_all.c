#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its arguments
 *
 * @n: number of extra parameteres
 * Return: 0 if n is equall to 0, otherwise return sum of all argc
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int sum;

	if (n == 0)
		return (0);

	va_start(list, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
