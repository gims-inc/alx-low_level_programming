#include <stdio.h>
/**
 * main - Print numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++;)
	{
	printf("%d", number);
	}
	putchar('\n');
	return (0);
}
