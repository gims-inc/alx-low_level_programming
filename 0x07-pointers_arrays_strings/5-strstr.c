#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to string with the substring
 * @needle: pointer to the substing to be searcched
 * Return: pointer to beginning of located substring, Null
 * if substring not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;
		char *substring = needle;

		while (*haystack && *substring && *haystack == *substring)
		{
			haystack++;
			substring++;
		}
		if (!*substring)
			return (src);
		haystack = src + 1;
	}
	return (0);
}
