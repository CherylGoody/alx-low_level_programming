#include "main.h"

/**
 **_strcpy - function that copies the string pointed to by src
 *
 *@dest: parameter to bear the copied string
 *@src: parameter to be copied from
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

