#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings followed by new line
 * @separator: string printed btn strings
 * @n: number of extra parameters
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;
	char *strPtr;


	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		strPtr = va_arg(strs, char*);
		if (strPtr == NULL)
			strPtr = "(nil)";

		printf("%s", strPtr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");

	va_end(strs);
}
