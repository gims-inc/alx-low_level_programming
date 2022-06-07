#include "main.h"
/**
 * print_alphabet_x10 - print the aplhabet in lowecase 10x.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x = 0;
	char alphabet_char;

	while (x < 10)
	{
		alphabet_char = 'a';
		while (alphabet_char <= 'z')
		{
			_putchar(alphabet_char);
			alphabet_char++;
		}
		_putchar('\n');
		x++;
	}
}
