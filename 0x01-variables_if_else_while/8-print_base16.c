#include <stdio.h>

/**
 * main - startup program
 *
 * Return: 0 successful
 */

int main(void)
{
	int i;
	char v;

	for (i = 0 ; i <= 9 ; i++)
		putchar(i + '0');
	for (v = 'a' ; v <= 'f' ; v++)
		putchar(v);
	putchar('\n');

	return (0);
}
