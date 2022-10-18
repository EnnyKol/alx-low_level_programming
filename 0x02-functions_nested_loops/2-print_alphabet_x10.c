#include "main.h"

/**
 * main - print alphabets in lower cases.
 * Made by Eni
 * Return: Always zero (0).
**/
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
	for (i = 0; i < 26; i++)
	{
		_putchar(alp[i]);
	}
_putchar('\n');
return (0);
}
