#include "main.h"

/**
 * leet - encode strings to 1337
 * @str: string -input
 * Return: str
 */

char *leet(char *str)
{
	int len, i;
	int lowercase[] = {97, 101, 111, 116, 108};
	int uppercase[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	len = 0;
	while (*(str + len) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(str + len) == lowercase[i] || *(str + len) == uppercase[i])
			{
				*(str + len) = numbers[i];
				break;
			}
		}
		len++;
	}
	return (str);
}
