#include <stdio.h>

/**
 * main - print the alphabet bith uppercase and lower
 * Return: 0 if successful
 */

int main(void)
{
	int i = 'a';
	int j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
