#include "main.h"
/**
 * print_last_digit -a funtion that prints the last digit of a number
 * Return: 0 if successful
 * @n: number to extract
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n / -1;
		int last_num;

		last_num = n % 10;
		return (last_num);
	}
	int last_num;

	last_num = n % 10;
	return (last_num);
}
