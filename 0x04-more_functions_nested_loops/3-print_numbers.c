#include "main.h"

/**
 * print_numbers - prints 0-9 followed by a new line
 * Return: no return value
 */

void print_numbers(void)
{
	int i = 48;

	for (; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
