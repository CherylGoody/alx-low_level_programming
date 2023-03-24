#include <stdio.h>

/**
 * main - program startup
 *
 *program prints numbers 1 t0 100; multiples of 3 take up 'FIZZ'
 *multiples of 5 take up BUZZ
 *multiples of 15 take up FIZZBUZZ
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
