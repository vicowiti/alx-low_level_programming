#include "main.h"
/**
 * _isupper - checks for uppercase letter
 * Return: 1 if uppercase, 0 otherwise
 * @c: char to be checked
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
