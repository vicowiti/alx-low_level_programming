#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 * Return: no return value
 */
void print_alphabet_x10(void)
{
	int i = 97;
	int j = 0;

	for (; j < 10; j++)
	{
		for (; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
