#include <stdio.h>
/**
 * main - Print the 0 to 9 and a to f.
 * use only 3 putchar.
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;

for (number = 0; number < 10; number++)
{
	putchar(number + '0');
}

char alphabet_char = 'a';

while (alphabet_char <= 'f')
{
	putchar(alphabet_char);
	alphabet_char++;
}
putchar('\n');
return (0);
}
