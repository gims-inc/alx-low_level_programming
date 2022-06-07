#include "main.h"
/**
 * print_sign - check number if posive,negative or zero
 * @n: type integer
 * Return: 1 if positive, -1 if negative and 0 if zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
