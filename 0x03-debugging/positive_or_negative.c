#include "main.h"
/**
 * main - Determine if a number is positive or negative o zero.
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);

if (i == 0)
printf("%d is zero\n", i);

if (i < 0)
printf("%d is negative\n", i);

}
