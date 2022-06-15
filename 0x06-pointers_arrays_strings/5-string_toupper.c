#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @c: string
 * Return: c
 */

char *string_toupper(char *c)
{
	int len;

	for (len = 0; c[len] != '\0'; len++)
	{
		if (c[len] >= 97 && c[len] <= 122)
		{
			c[len] -= 32;
		}
	}
	return (c);

}
