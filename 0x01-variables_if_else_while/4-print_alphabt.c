#include <stdio.h>

/**
 * main - print the lowercase alphabet except q and e
 * Return: 0 if successful
 */

int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		if (i == 'e' || i == 'q')
		{
			i++;
		}
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
