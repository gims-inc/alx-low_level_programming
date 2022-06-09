#include "main.h"
/**
 * _isdigit - check for lowercase digits
 * return 1 if its a digit and 0 if not.
 * @c: integer type
 * Return: 1 if digit, 0 if not
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
