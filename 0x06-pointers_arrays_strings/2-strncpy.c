#include "main.h"

/**
 * _strncpy - copy a stríng.
 * @dest: first string.
 * @src: second string.
 * @n: n bytes from src.
 * Return: pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
	dest[k] = src[k];
	k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
