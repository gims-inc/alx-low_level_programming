#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_char - print a char
 * @c: char to print
 *
 * Return: void
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * print_string - prints a string
 * @s: string to print
 *
 * Return: void
 */
void print_string(va_list s)
{char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_integer - prints an int
 * @i: int to print
 *
 * Return: void
 */
void print_integer(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * print_float - prints a float
 * @f: float to print
 *
 * Return: void
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_all - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	print_t p[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_integer},
		{"f", print_float},
		{NULL, NULL}
	};
	va_list valist;
	char *separator = "";

	va_start(valist, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (p[j].type != NULL)
		{
			if (*(p[j].type) == format[i])
			{
				printf("%s", separator);
				p[j].f(valist);
				separator = ", ";
				break;
			}
			j++;

		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
