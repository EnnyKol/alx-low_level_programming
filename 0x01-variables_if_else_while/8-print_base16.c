#include <stdio.h>

/**
 * main- print numbers from 0 to 9 and letters a to f.
 *
 * Return: Always zero (success).
**/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
		putchar('\n');
	return (0);
}
