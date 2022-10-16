#include <stdio.h>

/**
 * main- print numbers from 0 to 9 with commands and spaces inbetween.
 *
 * Return: Always 0 (Success).
**/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
	return (0);
}
