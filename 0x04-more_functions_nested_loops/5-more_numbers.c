#include "main.h"

/**
 * more_numbers - Prints the numbers 0-14 ten times.
 */
void more_numbers(void)
{
	int numb, count;

	for (count = 0; count <= 9; count++)
	{
		if (numb > 9)
			_putchar((numb / 10) + '0');
		_putchar((numb % 10) + '0');
	}

	_putchar('\n');

}
