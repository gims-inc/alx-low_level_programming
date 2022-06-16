#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 */

void print_number(int n)
{
	unsigned int num, newnum, count;

	if (n < 0)
	{
		_putchar(45);
		num = n * -1;
	}
	else
	{
		num = n;
	}

	newnum = num;
	count = 1;

	while (newnum > 9)
	{
		newnum /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((num / count) % 10) + 48);
	}
}
