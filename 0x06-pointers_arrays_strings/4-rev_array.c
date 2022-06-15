#include "main.h"

/**
 * reverse_array - reverse the contents of an array
 * @a: integer pointer -array of integers
 * @n: integer -number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int len, temp;

	for (len = 0; len < (n / 2); len++)
	{
		temp = a[len];
		a[len] = a[n - len - 1];
		a[n - len - 1] = temp;
	}
}
