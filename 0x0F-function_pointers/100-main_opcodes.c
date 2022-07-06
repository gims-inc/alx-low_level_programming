#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of the main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 or 2 otherwise
 */

int main(int argc, char *argv[])
{
	unsigned char *fxn;
	int i = 0, sizeBytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	fxn = (unsigned char *) main;
	sizeBytes = atoi(argv[1]);
	for (; i < sizeBytes; i++)
	{
		printf("%02x", *(fxn + i));
		if (i != sizeBytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
