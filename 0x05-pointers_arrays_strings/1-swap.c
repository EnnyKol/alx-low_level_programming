#include "main.h"

/**
 * swap_int - Swap values of two integers.
 * @a: first integer value.
 * @b: second integer value.
**/

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
