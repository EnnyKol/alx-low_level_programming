#include "main.h"

/**
 * _strcat - concatenating of two strings
 * @dest: first string.
 * @src: the second string.
 * Return: pointer tp the returning string dest
 */
char *_strcat(char *dest, char *src)
{
	int index;

	for (index = 0; dest[index] >= '\0'; index++)
	{
		if (dest[index] == src)
			return (dest + index);
	}

	return ('\0');
}
