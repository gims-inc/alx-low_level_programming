#include "main.h"

/**
 * _sqrt_finder - return square root of a number
 * @i: number being checked
 * @x: square number
 * Return: i or 0 or -1
 */

int _sqrt_finder(int i, int x)
{
	int sqr;

	sqr = i * i;
	if (sqr == x)
		return (i);
	else if (sqr > x)
		return (-1);
	else
		return (_sqrt_finder(i + 1, x));
}

/**
 * _sqrt_recursion - return natural suquare root of a number
 * @n: number whose square root is in question
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_finder(1, n));
}
