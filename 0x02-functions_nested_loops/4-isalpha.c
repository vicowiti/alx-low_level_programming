#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic order
 * Return: 1 if c is a letter, 0 if otherwise
 * @c: param to be checked
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
