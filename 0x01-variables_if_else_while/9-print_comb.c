#include <stdio.h>
/**
 * main - print all possible combination of single digits
 * Ascending order
 * only use putchar max 4
 * do not use char
 * Return: 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
	putchar(number + '0');
	if (number < 9)
	{
	putchar(44);/*comma*/
	putchar(32);/*space*/
	}
	number++;
	}
	putchar('\n');
	return (0);
}
