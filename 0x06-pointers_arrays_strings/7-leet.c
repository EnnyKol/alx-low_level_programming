#include "main.h"
#include <stdio.h>

/**
 * leet - encodes 1337
 * @n: to be printed.
 * Return: n
 */
char *leet(char *n)
{
	int i = 0, k;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (n[i])
	{
		for (i = 0; i <= 7; k++)
		{
			if (n[i] == leet[k] ||
			    n[i] - 32 == leet[k])
				n[i] = k + '0';
		}
		i++;
	}

	return (n);
}
