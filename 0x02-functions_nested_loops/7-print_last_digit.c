#include "main.h"
/**
 * print_last_digit - Print the last digit of a given number
 * @number: type integer.
 * Return: last digit value
 */
int print_last_digit(int number)
{
	int val;

	if (number < 0)
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
