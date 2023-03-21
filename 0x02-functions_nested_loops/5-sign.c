#include "main.h"
#include <stdio.h>
/**
 * print_sign - function that prints the sign of a number
 *
 * @n: parameter to be checked
 *
 * Return: 1 when n is greater than zero
 * else 0 if n is equals 0
 * and -1 if n is less than 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
