#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: first string.
 * @src: second string.
 * @n: n bytes from src.
 * Return: pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)

{

	int i;
	int k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
