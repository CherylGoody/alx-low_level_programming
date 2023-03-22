#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * @a: parameter to determine its lasr number
 *
 * Return: b successful
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;

	if (a < 0)
		b = -b;
	_putchar(b + '0');
	return (b);

}
