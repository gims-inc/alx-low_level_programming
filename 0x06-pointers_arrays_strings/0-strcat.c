#include "main.h"

/**
 * _strcat - concatenate two strings
 * Appends the src string to the dest string
 * @dest: pointer char string.
 * @src: pointer char string
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int destLen, srcLen;

	destLen = 0;
	for (; dest[destLen] != '\0'; destLen++)
		;

	for (srcLen = 0; src[srcLen] != '\0'; srcLen++)
	{
		dest[destLen] = src[srcLen];
		destLen++;
	}

	dest[destLen] = '\0';
	return (dest);
}
