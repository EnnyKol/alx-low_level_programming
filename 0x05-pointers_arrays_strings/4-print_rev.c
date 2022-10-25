#include "main.h"

/**
 * print_rev - print strings in reverse.
 * @s: string to be printed.
 */

void print_rev(char *s)
{
	while (*s)
		_putchar(*s++);
	_putchar('\n');
}
