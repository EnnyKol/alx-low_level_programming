#include "main.h"

/**
 *  print_alphabet_x10 - print alphabets in lowercases 10 times.
**/
void print_alphabet_x10(void)
{
	int count = 0;
	char alph;

	while (count++ <= 9)
	{
		for (alph = 97; alph <= 122; alph++)
			_putchar(alph);
		_putchar('\n');
	}
}
