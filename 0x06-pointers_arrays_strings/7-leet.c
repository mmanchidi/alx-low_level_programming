#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @a: input value
 * Return: a value
 */

char *leet(char *a)
{
	int b, c;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (b = 0; a[b] != '\0'; a++)
	{
		for (c = 0; c < 10; c++)
		{
			if (a[b] == s1[c])
				a[b] = s2[c];
		}
	}
	return (a);
}
