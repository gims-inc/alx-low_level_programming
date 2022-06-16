#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: num1
 * @n2: num2
 * @r: buffer used by funton to store result
 * @size_r: buffer size
 * Return: pointer to dest
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, i, l = 0, x, y, z = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	if (len1 > len2)
		l = len1;
	else
		l = len2;
	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';
	for (i = l - 1; i >= 0; i--)
	{
		len1--;
		len2--;
		if (len1 >= 0)
			x = n1[len1] - '0';
		else
			x = 0;
		if (len2 >= 0)
			y = n2[len2] - '0';
		else
			y = 0;
		r[i] = (x + y + z) % 10 + '0';
		z = (x + y + z) / 10;
	}
		if (z == 1)
		{
			r[l + 1] = '\0';
			if (l + 2 > size_r)
				return (0);
			while (l-- >= 0)
				r[l + 1] = r[l];
					r[0] = z + '0';
		}
		return (r);
}
