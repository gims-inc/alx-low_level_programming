#include "main.h"
/**
 * _isupper - check for lowercase characters
 * return 1 if true and 0 if false.
 * @ch: char type
 * Return: 1 (true), 0 (false)
 */
int _isupper(int ch)
{
	if (ch >= 65 && ch <= 90)
	{
		return (1);
	}
	return (0);
}
