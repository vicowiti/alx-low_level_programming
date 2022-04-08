#include <stdio.h>

/**
 * main -alphabet in reverse order
 * Return: 0 if successful
 */

int main(void)
{
	int x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
