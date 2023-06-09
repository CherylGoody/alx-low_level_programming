#include "main.h"

/**
 *print_rev - function that prints a string, in reverse,
 *followed by a new line
 *
 *@s: parameter bearing the string to be printed
 *
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
