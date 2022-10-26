#include "main.h"

/**
 * _strcpy - copies the string pointed to by src.
 * @dest: A buffer to copy the string to.
 * @src: The string to copy
 *
 * Return: A pointer to string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}



	return (dest);
}
