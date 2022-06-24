#include "main.h"
/**
 * _islower - check for lowercase characters
 * return 1 if true and 0 if false.
 * @ch: char type
 * Return: 1 (true), 0 (false)
 */
int _islower(int ch)
{
	if (ch >= 97 && ch <= 122)
	{
		return (1);
	}
	return (0);
}
