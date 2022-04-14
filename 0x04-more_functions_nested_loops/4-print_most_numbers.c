#include "main.h"

/**
 * print_most_numbers - print 0 - 9 while ommitting 2 and 4
 * Return: no return value
 */

void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i == 50 || i == 52)
		{
			i++;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
