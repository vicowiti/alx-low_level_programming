#include "main.h"

/**
 * print_rev - reverse a string
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int len, i = 0;
	int z;

	for (; s[i] != '\0'; i++)
	{
		len = len + 1;
	}
	for (z = len - 1; z >= 0; z--)
	{
		_putchar(s[z]);
	}
	_putchar('\n');
}
