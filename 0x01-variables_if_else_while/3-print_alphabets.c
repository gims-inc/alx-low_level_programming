#include <stdio.h>
/**
 * main - Print the aplhabet in lowercase and uppercase using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet_char = 'a';
while (alphabet_char <= 'z')
{
	putchar(alphabet_char);
	alphabet_char++;
}

char alphabet_char = 'A';
while (alphabet_char <= 'Z')
{
	putchar(alphabet_char);
	alphabet_char++;
}
putchar('\n');
return (0);
}
