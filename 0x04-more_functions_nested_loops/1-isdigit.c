#include "main.h"

/**
 * _isdigit - checks for a digit
 * Return: 1 ifa  digit, 0 otherwise
 * @c: number to be checked
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
