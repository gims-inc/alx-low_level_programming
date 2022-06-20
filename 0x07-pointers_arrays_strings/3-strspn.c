#include "main.h"

/**
 * _strspn - gets the length o a prefix ssubstring
 * @s: pointer
 * @accept: pointer
 * Return: no of bytes in inital segment that have bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		for (i = 0; accept[i] != s[counter]; i++)
		{
			if (accept[i] == '\0')
				return (counter);
		}
	}
	return (counter);
}
