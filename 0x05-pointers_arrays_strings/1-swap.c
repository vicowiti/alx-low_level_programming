#include "main.h"

/**
 * swap_int - function that swaps param values
 * @a: param 1
 * @b: param 2
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
