#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: input value
 * @src: input value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

