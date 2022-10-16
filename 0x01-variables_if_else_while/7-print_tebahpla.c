#include <stdio.h>

/**
 * main- print in reverse the alphabets.
 *
 * Return: Always zero (Success)
**/
int main(void)
{
	int i;

	for (i = 'Z'; i >= 'A'; i--)
	{
		putchar(i);
	}
		putchar('\n');
	return (0);
}
