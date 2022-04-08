#include <stdio.h>

/**
 * main - print all base 10 numbers
 * Return: return 0 if successful
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');
	return (0);
}
