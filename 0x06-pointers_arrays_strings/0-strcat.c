#include "main.h"

/**
 * _strcat - function that concats two strings
 * @dest: parent string
 * @src: string to be appended
 * Return: char pointer to the resultant string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (*dest);
}
