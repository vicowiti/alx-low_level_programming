#include "main.h"

/**
 * main - print the string "putchar" then a new line
 * Return: 0 if successful
 */

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
