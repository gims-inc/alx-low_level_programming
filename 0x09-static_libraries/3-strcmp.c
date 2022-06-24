#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string pointer
 * @s2: string pointer
 * Return: 0 if matchs,negative int if s1 < s2,poitive int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int len;

	for (len = 0; s1[len] != '\0' || s2[len] != '\0'; len++)
	{
		if (s1[len] != s2[len])
			return (s1[len] - s2[len]);
	}
	return (0);
}
