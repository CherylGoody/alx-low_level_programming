#include <stdio.h>

/**
 * main - startup program
 *
 * Return: 0 Successful
 */

int main(void)
{
	int i;
	int b;

	for (i = 0 ; i < 10 ; i++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			if (i < b && i != b)
			{
				putchar(i + '0');
				putchar(b + '0');
				if (i + b != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
