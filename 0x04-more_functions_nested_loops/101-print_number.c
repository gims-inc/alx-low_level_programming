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
	/*int a, b, c, d;*/

	if (n < 0)
	{
		m = n * -1;
		_putchar(45);
	}
	else
		m = n;

	if (m >= 1000 && m < 10000)
	{
		_putchar(m / 1000 + '0');
		_putchar((m / 100) % 10 + '0');
		_putchar((m / 10) % 10 + '0');
		_putchar(m % 10 + '0');
	}
	else if (m >= 100 && m < 1000)
	{
		_putchar(m / 100 + '0');
		_putchar((m / 10) % 10 + '0');
		_putchar(m % 10 + '0');
	}
	else if (m >= 10 && m < 100)
	{
		_putchar((m / 10) + '0');
		_putchar(m % 10 + '0');
	}
	else if (m > -1 && m < 10)
	{
		_putchar(m % 10 + '0');
	}
	/**
	*a && _putchar(a + '0');
	*b && _putchar(b + '0');
	*c && _putchar(c + '0');
	*d && _putchar(d + '0');
	*/
}
