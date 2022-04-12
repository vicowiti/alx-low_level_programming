#include "main.h"
/**
 * print_alphabet - print the alphabet
 * Return: 0 when successful
 */
void print_alphabet(void)
{
	int i = 97;

	for (; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
