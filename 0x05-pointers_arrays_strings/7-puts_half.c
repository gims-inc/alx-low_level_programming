#include "main.h"
/**
 * puts_half - print second half of a string
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 */

void puts_half(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
		;

	idx++;
	for (idx /= 2; str[idx] != '\0'; idx++)
	{
		_putchar(str[idx]);
	}
	_putchar('\n');
}
