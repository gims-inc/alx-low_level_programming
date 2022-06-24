#include "main.h"
/**
 * _puts - print a string to stdout
 * @str: char array string type
 * Description: only use _putchar
 */

void _puts(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		_putchar(str[idx]);
	}
	_putchar('\n');
}
