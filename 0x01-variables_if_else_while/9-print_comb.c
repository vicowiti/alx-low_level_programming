#include <stdio.h>

/**
 * main - print a number pattern
 * Return: 0 if successful
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
	return (0);
}