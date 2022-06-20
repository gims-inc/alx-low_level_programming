#include "main.h"

/**
 * print_chessboard - self explanatory
 * @a: pointer to input
 * Return: no return
 */

void print_chessboard(char (*a)[8])
{
	unsigned int len, c;

	for (len = 0; len < 8; len++)
	{
		for (c = 0; c < 8; c++)
			_putchar(a[len][c]);
		_putchar('\n');
	}
}
