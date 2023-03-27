#include "main.h"

/**
 *_strlen - function that prints lenght of string
 *
 *@s: parameter bearing string which its lenght will be printed
 *
 * Return: 0 if successful
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	return (count);
}
