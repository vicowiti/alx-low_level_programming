#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * Return: 0 if successful
 * @n: number to be converted
 */


int _abs(int n)
{
	if (n < 0)
	{
		n = n / -1;
		return (n);
	}
	return (n);
}
