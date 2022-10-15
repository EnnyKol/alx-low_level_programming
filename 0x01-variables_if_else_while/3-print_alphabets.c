#include <stdio.h>

/**
 * main- Show alphabets in lower case and then uppercase.
 *
 * Return: Always 0 (success)
**/
int main(void)
{
	char alp[52] =
	"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar (alp[i]);
	}
		putchar ('\n');
		return (0);
}
