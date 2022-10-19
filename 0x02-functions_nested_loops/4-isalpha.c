#include "main.h"

/**
 * _isalpha - checks for char alphabet.
 * @c : tge char to be checked.
 *
 * Return: 1 if char is letter lower or uppercase, otherwise 0.
**/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

