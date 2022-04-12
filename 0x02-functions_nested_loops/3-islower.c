#include "main.h"
/**
 * _islower - checks if tthe param provided is a lowercase char
 * Return: returns 1 if it is lowercase, o otherwise
 * @c: the character to check
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
