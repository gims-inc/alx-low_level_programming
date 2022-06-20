#include "main.h"

/**
 * _strchr - locate a haracter in a string
 * @s: pointer to the string
 * @c: pointer to the character
 * Return: pointer to first occurrence of c
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
