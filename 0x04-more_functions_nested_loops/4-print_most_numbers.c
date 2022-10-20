#include "main.h"

/**
 * print_most_numbers - prints numbers from 0-9 excluding 2 and 4.
**/
void print_most_numbers(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
	{
		if (numb != 2 && numb != 4)
			_putchar((numb % 10) + '0');
	}
	_putchar('\n');
}
