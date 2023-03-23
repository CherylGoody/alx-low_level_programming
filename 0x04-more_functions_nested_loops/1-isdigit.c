#include "main.h"

/**
 * _isdigit - checks if input is digits from 0 to 9
 *
 *@c: parameter to be checked
 *
 * Return: i if parameter is digit and falls within range else print 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
