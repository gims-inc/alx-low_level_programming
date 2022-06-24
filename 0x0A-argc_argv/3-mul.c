#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply the args received and print result followed by a new line
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 1 if no arguments passed
 */

int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
