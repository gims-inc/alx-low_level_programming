#include "main.h"

/**
 * _strncat - concatenate two strings
 * Appends the src string to the dest string
 * @dest: pointer char string.
 * @src: pointer char string
 * @n: number of elements to concateneate
 * Return: pointer to resulting string `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int destLen, srcLen;

	destLen = 0;
	for (; dest[destLen] != '\0'; destLen++)
		;

	for (srcLen = 0; src[srcLen] != '\0' && n > 0; srcLen++, n--, destLen++)
	{
		dest[destLen] = src[srcLen];
	}

	return (dest);
}
