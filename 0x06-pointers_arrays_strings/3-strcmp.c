#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string pointer
 * @s2: string pointer
 * Return: 0 if matchs,negative int if s1 < s2,poitive int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2; s1++, s2++)
	{
		if (*s1 != '\0')
			return (0);
	}
	return (*s1 - *s2);
}
