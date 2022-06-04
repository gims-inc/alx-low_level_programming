#include <stdio.h>
/**
 * main - Print all possible diff combinations of three digits
 * only the smallest combinations of thre digits
 * In ascending order with the two digits
 * putchar only x6
 * no char variable
 * Return: 0 (Succeess)
 */
int main(void)
{
	int a, b, c, d;


	for (a = 0; a < 1000; a++)
	{
		b = a / 100;
		c = (a / 10) / 10;
		d = a % 10;

		if (b < c && c < d)
		{
			putchar(c + '0');
			putchar(b + '0');
			putchar(d + '0');

			if (a < 700)
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
