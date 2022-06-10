#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Desc: Find and print the largest prime factor of the number
 * 612852475143
 * Return: 0
 */
int main(void)
{
	int i;
	long number = 612852475143;

	for (i = (int) sqrt(number); i > 2; i++)
	{
		if (number % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	return (0);
}
