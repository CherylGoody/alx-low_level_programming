#include "main.h"
/* betty style doc for function main goes there */
/**
 * positive_or_negative - checks for positive or negative numbers
 *
 * @i: parameter to be checked
 *
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);
	else if (i == 0)
		printf("%d is zero", i);
	else
		printf("%d is negative", i);
	printf("\n");
}
