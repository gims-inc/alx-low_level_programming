#include "main.h"

/**
 * argstostr - concatenate all arguments of your program with newline
 * @ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: Null if fail, else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *ptr, *retptr;
	int count, j, total;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (count = 0, total = 0; count < ac; count++)
	{
		for (j = 0; *(*(av + count) + j) != '\0'; j++, total++)
			;
		total++;
	}
	total++;

	ptr = malloc(total * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	retptr = ptr;
	for (count = 0; count < ac; count++)
	{
		for (j = 0; av[count][j] != '\0'; j++)
		{
			*ptr = av[count][j];
			ptr++;
		}
		*ptr = '\n';
		ptr++;
	}

	return (retptr);
}
