#include "main.h"
/**
 * reverse_array - funstion that reverses an array
 *
 *@a: parameter 1
 *@n: parameter 2
 *
 *Reeturn: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
