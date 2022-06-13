#include "main.h"
/**
 * rev_string - reverse a string
 * @s: char array string type
 */

void rev_string(char *s)
{
	int s_idx, count, len;
	char rstr;

	for (s_idx = 0; s[s_idx] != '\0'; s_idx++)
		;

	len = s_idx;
	for (s_idx--, count = 0; count < len / 2; s_idx--, count++)
	{
		rstr = s[count];
		s[count] = s[s_idx];
		s[s_idx] = rstr;
	}
}
