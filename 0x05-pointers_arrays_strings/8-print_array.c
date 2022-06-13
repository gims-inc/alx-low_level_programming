#include "main.h"

/**
 * print_array - print `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: separate numbers with a comma and space.
 * Display numbers in the same order they are stored in array.
 * Printf allowed.
 */

void print_array(int *a, int n)
{
	int idx;

	idx = 0;
	for (n--; n >= 0; n--, idx++)
	{
		printf("%d", a[idx]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
