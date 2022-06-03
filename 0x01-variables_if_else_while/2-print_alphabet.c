#include <stdio.h>
/**
 * main - Print the letters of the aplhabet in lowecase using putchar.
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
putchar('\n');
return (0);
}
