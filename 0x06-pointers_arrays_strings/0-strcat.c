#include "main.h"

/**
 **_strcat - a function that concatenates two strings.
 *
 *@dest: parameter to which a value will be appended
 *@src: parameter bearing the value to be appended
 *
 *Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
