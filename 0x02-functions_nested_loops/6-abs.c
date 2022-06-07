#include "main.h"
/**
 * _abs - Print absolute value of an integer
 * @number: type number
 * Return: Absolute value.
 */
int _abs(int number)
{
	if (number < 0)
	{
		return (number * -1);
	}
	else
	{
		return (number);
	}
}
