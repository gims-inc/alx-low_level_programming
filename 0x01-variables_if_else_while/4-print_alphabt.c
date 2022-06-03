#include <stdio.h>
/**
 * main - Print the letters of the aplhabet without e and q using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet_char = 'a';
while (alphabet_char <= 'z')
{
if (alphabet_char != 'e' && alphabet_char != 'q')
putchar(alphabet_char);

alphabet_char++;

}
putchar('\n');
return (0);
}
