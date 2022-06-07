#include "main.h"
/**
 * print_last_digit - Print the last digit of a given number
 * @n: type integer.
 * Return: last digit value
 */
int print_last_digit(int n)
{
	int val;

	if (n < 0)
	{
		val = -1 * (n % 10);
		_putchar(val + '0');
		return (val);
	}
	else
	{
		val = n % 10;
		_putchar(val + '0');
		return (val);
	}
}
