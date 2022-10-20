#include "main.h"

/**
 * print_numbers - print the numbers from 0 to 9.
**/
void print_numbers(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
		_putchar((numb % 10) + '0');
	_putchar('\n');
}
