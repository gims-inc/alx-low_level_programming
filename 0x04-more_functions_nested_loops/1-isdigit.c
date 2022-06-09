#include "main.h"
/**
 * _isdigit - check for lowercase digits
 * return 1 if true and 0 if false.
 * @: integer type
 * Return: 1 (true), 0 (false)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
