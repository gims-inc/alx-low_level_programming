#include "main.h"
/**
 * print_alphabet - print the aplhabet in lowecase.
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char alphabet_char = 'a';

	while (alphabet_char <= 'z')
	{
		_putchar(alphabet_char);
		alphabet_char++;
	}
		_putchar('\n');
}
