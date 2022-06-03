#include <stdio.h>
/**
 * main - Print the letters of the aplhabet in Reverse using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet_char;

for (alphabet_char = 'z'; alphabet_char >= 'a'; alphabet_char--)
{
	putchar(alphabet_char);
}
putchar('\n');
return (0);
}
