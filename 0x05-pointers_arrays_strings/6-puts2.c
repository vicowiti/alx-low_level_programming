#include "main.h"

/**
 * puts2 - everry other char
 * @str: input string
 */

void puts2(char *str)
{
	int i, j, len = 0;

	for (i = 0; i != '\0'; i++)
	{
		len = len + 1;
	}
	for (j = 0; j < len; j = j + 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
