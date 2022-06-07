#include "main.h"
/**
 * times_table - print 9 times table.
 * start with .
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int a = 0; /* factor */
	int b; /* count  */
	int c; /* result */

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = a * b;

			if (c > 9)
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			else if (b != 0)
			{
				_putchar(' ');
				_putchar(c + '0');
			}
			else
			{
				_putchar(c + '0');
			}

			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
