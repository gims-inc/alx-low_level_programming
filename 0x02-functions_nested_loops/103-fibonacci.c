#include <stdio.h>
/**
 * main - Print the sum of even Fibonacci numbers
 * not exceeding 4,000,000.
 * Return: 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int sum = 0;
	int c;

	while (b < 4000000)
	{
		if (b % 2 == 0)
			sum += b;

		c = b;
		b += a;
		a = c;
	}
	printf("%d\n", sum);
	return (0);
}
