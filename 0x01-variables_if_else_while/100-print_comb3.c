#include <stdio.h>
/**
 * main - Print all possible diff combinations of two digits
 * only the smallest combinations of two digits
 * In ascending order with the two digits
 * putchar only x5
 * no char variable
 * Return: 0 (Succeess)
 */
int main(void)
{
	int a, b, c;

	a = 0;

	while (a < 100)
	{
		b = a % 10;
		c = a / 10;

		if (c < b)
		{
			putchar(c + '0');
			putchar(k + '0');

			if (a < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
