#include "main.h"

/**
 * prime_checker - finds prime numbers
 * @n: number to check - integer
 * @i: for other checks -integer
 * Return: primes
 */

int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime_checker(n, i - 1));
}

/**
 * is_prime_number - determine if the given number is prime
 * @n: the number in question
 * Return: 1 if prime or 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime_checker(n, n / 2) > 0)
		return (1);
	else
		return (0);
}
