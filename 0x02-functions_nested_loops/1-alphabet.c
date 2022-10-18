#include "main.h"

/**
 * main - print alphabets in lower cases.
 * Made by Eni
 * Return: Always zero (0).
**/
int main(void)
{
	char alp[26] =
"abcdefghijklmnopqrstuvwxyz";
	int l;

	for (l = 0; l < 26; l++)

	{
		_putchar(alp[l]);
	}
	_putchar ('\n');
	return (0);
}
