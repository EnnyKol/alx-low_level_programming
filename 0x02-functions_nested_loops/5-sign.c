#include "main.h"

/**
 * print_sign - print the sign of a number.
 * @n: the number to be check.
 * Return: prints + if n > 0,prints 0 if n = zero prints - if <1.
**/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{	_putchar('-');
		return (-1);
	}
}
