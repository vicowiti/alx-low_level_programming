#include <stdio.h>

/**
 * main - print hexadecimal characters
 * Return: 0 if successful
 */

int main(void)
{
	int i = 48; /* for 0 -9 */
	int j = 'a'; /* to looop upto f */

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
