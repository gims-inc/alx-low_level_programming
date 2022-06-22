#include "main.h"

/**
 * factorial - return factorial of a number
 * @n: number - type integer
 * Return: number factorial or -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
