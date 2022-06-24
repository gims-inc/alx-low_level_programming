#include "main.h"
/**
 * _isalpha - check for alphabet characters
 * return 1 if true and 0 if false.
 * @c: char type
 * Return: 1 (true), 0 (false)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
