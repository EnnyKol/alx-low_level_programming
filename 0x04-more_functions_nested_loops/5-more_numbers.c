#include "main.h"

/**
 * more_numbers - prints the numbers 0-14 ten times.
 */
void more_numbers(void)
{
	int numb, count;

	for (count = 0; count <= 14; count++)
	{
		if (numb > 14)
			_putchar((numb / 10) + '0');
		_putchar((numb % 10) + '0');
	}

	_putchar('\n');

}
