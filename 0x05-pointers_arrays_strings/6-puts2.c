#include "main.h"

/**
 * puts2 - print each char of a string on a new line
 * @str: char array string type
 */

void puts2(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if (idx % 2 == 0)
			_putchar(str[idx]);
	}
	_putchar('\n');
}
