#include "main.h"

/**
 * print_line - prints shortest distance
 * Return: no return value
 * @n: control param
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}
