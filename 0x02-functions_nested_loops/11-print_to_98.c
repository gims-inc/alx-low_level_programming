#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers between n and 98.
 * @n: integer
 *
 * Return: sum
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		printf("%d", n);
	}
	else
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			if (i < 98)
			{
				printf("%d", i);
				_putchar(44);
				_putchar(0);
			}
			else
			{
				printf("%d", i)
			}
		}
	}

}
