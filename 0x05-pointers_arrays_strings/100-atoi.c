#include "main.h"
/**
 * _atoi - Convert a string to integer.
 * @s: char array string
 * Description: Number in the string can be preceded by an infinite
 * number of characters.
 * Do take into account all -/+ signs before the number.
 * If there are no numbers in the string, return 0.
 * No need to check for overflow.
 * Special values not allowed.
 * Return: first integer found in string
 */

int _atoi(char *s)
{
	int idx;
	int h, p;

	h = 0;
	p = -1;
	for (idx = 0; s[idx] != '\0'; idx++)
	{
		if (s[idx] == '-')
			p *= -1;

		if (s[idx] > 47 && s[idx] < 58)
		{
			if (h < 0)
				h = (h * 10) - (s[idx] - '0');
			else
				h = (s[idx] - '0') * -1;

			if (s[idx + 1] < 48 || s[idx + 1] > 57)
				break;
		}
	}
	if (p < 0)
		h *= -1;

	return (h);
}
