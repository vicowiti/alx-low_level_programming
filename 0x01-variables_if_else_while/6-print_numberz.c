#include <stdio.h>

/**
 * main - print numbers of base 10 using ascii
 * Return: zero if succesful
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
