#include "main.h"

/**
 * _islower - check if a char is lowercase.
 * @c: the char whether lowercase.
 * Return: 1 if char is lowercase, otherwise 0.
**/

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}