#include "main.h"

/**
 * string_nconcat - concatenate strings with n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return: NULL if fail, else pointer to malloc memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int strLen1, strLen2, count, count1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (strLen1 = 0; s1[strLen1] != '\0'; strLen1++)
		;

	for (strLen2 = 0; s2[strLen2] != '\0'; strLen2++)
		;

	ptr = malloc((strLen1 + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (count = 0, count1 = 0; count < (strLen1 + n); count++)
	{
		if (count < strLen1)
			ptr[count] = s1[count];
		else
			ptr[count] = s2[count1++];
	}
	ptr[count] = '\0';

	return (ptr);
}
