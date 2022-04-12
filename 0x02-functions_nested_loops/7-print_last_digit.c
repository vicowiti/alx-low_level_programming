#include "main.h"
/**
 * print_last_digit -a funtion that prints the last digit of a number
 * Return: 0 if successful
 * @n: number to extract
 */

int print_last_digit(int n)
{
	int last_num;

	if (n < 0)
	{
		n = n / -1;
		last_num = n % 10;
		return (last_num);
	}
	if (n < 10)
	{
		return (n);
	}
	last_num = n % 10;
	return (last_num);
}
