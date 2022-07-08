#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything, where format,
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int n = 0, c = 0;
	char *separator = ", ";
	char *str;

	va_start(list, format);

	while (format && format[c])
		c++;

	while (format && format[n])
	{
		if (n  == (c - 1))
		{
			separator = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(list, int), separator);
			break;
		case 'i':
			printf("%d%s", va_arg(list, int), separator);
			break;
		case 'f':
			printf("%f%s", va_arg(list, double), separator);
			break;
		case 's':
			str = va_arg(list, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, separator);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(list);
}
