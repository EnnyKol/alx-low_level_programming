#include "main.h"

/**
 * _strcmp - compare two strings.
 * @s1: first string to be compared
 * @s2: second string
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int k;

	k = 0;
	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[1])
		{
			return (s1[k] - s2[k]);
		}
	k++;
	}
	return (0);
}
