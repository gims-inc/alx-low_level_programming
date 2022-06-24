#include "main.h"

/**
 * _strpbrk - searches a string for any sets of bytes
 * @s: pointer to string 1
 * @accept: pointer to string 2
 * Return: pointer to s byte if matching accept, Null if byte not found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (s + a);
		}
	}
	return (0);
}
