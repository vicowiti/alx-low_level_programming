#include "main.h"
/**
 * print_sign - prints + for a  positive, - for negative, 0 for zero
 * Return: 1 if greater than 0, 0 if zero -1 if less than zero
 * @n: parameter to be checked
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
