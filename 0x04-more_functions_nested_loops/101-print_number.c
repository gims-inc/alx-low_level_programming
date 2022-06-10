#include "main.h"

/**
 * print_number - prints an integer.
 * @n: int type number
 * Allowed  _putchar
 * Dissallowed (long)int m;
 */
void print_number(int n)
{
	int m;
	int a, b, c, d;

	if (n < 0)
	{
		m = n * -1;
		_putchar(45);
	}
	else
		m = n;

	if (m >= 1000 && m < 10000)
	{
		a = m / 1000;
		b = (m / 100) % 10;
		c = (m / 10) % 10;
		d = m % 10;
	}
	else if (m >= 100 && m < 1000)
	{
		a = m / 100;
		b = (m / 10) % 10;
		d = m % 10;
	}
	else if (m >= 10 && m < 100)
	{
		a = m / 10;
		b = m % 10;
	}
	else if (m > -1 && m < 10)
	{
		a = m % 10;
	}

	a && _putchar(a + '0');
	b && _putchar(b + '0');
	c && _putchar(c + '0');
	d && _putchar(d + '0');
}
