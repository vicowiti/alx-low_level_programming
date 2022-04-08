#include <stdio.h>

/**
 * main - print the alphabet followed by a new line
 * Return: 0 when successful
 */

int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
