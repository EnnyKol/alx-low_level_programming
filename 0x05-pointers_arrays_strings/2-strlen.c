/**
 * _strlen - Print length of a string.
 * @s: string to get the length.
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
