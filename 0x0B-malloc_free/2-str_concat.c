#include "main.h"

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int strLen1, strLen2, count, count1;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);


	for (strLen1 = 0; s1[strLen1] != '\0'; strLen1++)
		;

	for (strLen2 = 0; s2[strLen2] != '\0'; strLen2++)
		;

	ptr = malloc((strLen1 * sizeof(*s1)) + (strLen2 * sizeof(*s1)) + 1);

	if (ptr == NULL)
		return (NULL);

	for (count = 0, count1 = 0; count < (strLen1 + strLen2); count++)
		if (count < strLen1)
			ptr[count] = s1[count];
		else
			ptr[count] = s2[count1++];

	return (ptr);
}
