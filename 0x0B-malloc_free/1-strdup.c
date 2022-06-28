#include "main.h"

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *ptr;
	int strLen, count;

	if (str == NULL)
		return (NULL);

	for (strLen = 0; str[strLen] != '\0'; strLen++)
		;

	ptr = malloc(strLen * sizeof(*ptr) + 1);
	if (ptr == NULL)
		return (NULL);

	for (count = 0; count < strLen; count++)
		ptr[count] = str[count];
	ptr[count] = '\0';

	return (ptr);
}
