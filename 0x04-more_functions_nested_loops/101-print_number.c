#include "main.h"

/**
 * print_number - prints an integer.
 * @n: int type number
 * Allowed  _putchar
 */
void print_number(int n)
{
	long p10; /* power of 10 */
	int bc; /* boolean check */
	long num; /* cast int to long */

	num = n;
	/* negatives */
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}

	/* counting up */
	p10 = 1;
	bc = 1;
	while (bc)
	{
		if (num / (p10 * 10) > 0)
			p10 *= 10;
		else
			bc = 0;
	}

	/* counting down */
	while (num >= 0)
	{
		if (p10 == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / p10 % 10) + '0');
			p10 /= 10;
		}
	}
}
