#include <stdio.h>

/**
 * main- print in reverse the alphabets.
 *
 * Return: Always zero (Success)
**/
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
		putchar('\n');
	return (0);
}
