#include "main.h"

/**
 *swap_int - function that swaps two numbers
 *
 *@a: first value to be swapped
 *@b: second value to be swapped
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
