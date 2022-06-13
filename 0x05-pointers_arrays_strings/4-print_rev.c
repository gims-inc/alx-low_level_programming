#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: char array string type
 */

void print_rev(char *s)
{
	int sindex;

	for (sindex = 0; s[sindex] != '\0'; sindex++)
		;

	for (sindex--; sindex >= 0; sindex--)
		_putchar(s[sindex]);

	_putchar('\n');
}
