#include "main.h"
/**
 * main - Print _putchar folowed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int x = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		x++;
	}
	_putchar('\n');

	return (0);
}
