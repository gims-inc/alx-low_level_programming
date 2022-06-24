#include "main.h"

/**
 * _strncpy - copies a sting
 * @dest: string pointer
 * @src: string pointer
 * @n: char size to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len;

	for (len = 0; len < n && src[len] != '\0'; len++)
		dest[len] = src[len];
	for (; len < n; len++)
		dest[len] = '\0';

	return (dest);
}
