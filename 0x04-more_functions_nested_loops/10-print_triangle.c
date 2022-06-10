#include "main.h"
/**
 * print_triangle - print a triangle aligned right, using '#'
 * @size: integer Size of triangle
 */
void print_triangle(int size)
{
	int c, b, a;

	c = 0;
	b = size - 1;
	while (c < size)
	{
		b = size - 1 - c;
		a = c + 1;
		while (b > 0)
		{
			_putchar(' ');
			b--;
		}
		while (a > 0)
		{
			_putchar('#');
			a--;
		}
		_putchar('\n');
		c++;
	}

	if (size <= 0)
		_putchar('\n');
}
