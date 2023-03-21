#include "main.h"
/**
 * print_alphabet - prints alphabets in lower case
 *_putchar - prints characters
 *
 * Return: 0 succesful
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
