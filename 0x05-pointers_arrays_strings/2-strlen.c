#include "main.h"

/**
 * _strlen - calculate the actual length of a string
 * @s:  string provided
 * Return: length of the said string
 */

int _strlen(char *s)
{
	int i;
	int total = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		total = total + 1;
	}
	return (total);
}
