#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers followed by new line
 * @separator: string printed btn numbers
 * @n: number of extra parameters
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);

}
