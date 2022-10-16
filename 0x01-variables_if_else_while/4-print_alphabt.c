#include <stdio.h>

/**
 * main- prints all alphabets in lowercase except q and e.
 *
 * Return: Always 0 (Success).
**/
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 101 && i != 113)
		putchar(i);
	}
		putchar('\n');
	return (0);
}
