#include "main.h"

/**
 * _memset - fills memory wit a constant byte
 * @s: Memory area
 * @b: Constant byte
 * @n: bytes filled
 * Return: s pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		*(s + count) = b;

	return (s);
}
