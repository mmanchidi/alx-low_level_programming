#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @b: pointer
 * Return: *b
 */

char *rot13(char *b)
{
	int a;
	int c;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWQYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (a = 0; b[a] != '\0'; a++)
	{
		for (c = 0; c < 52; c++)
		{
			if (b[a] == data1[c])
			{
				b[a] = datarot[c];
				break;
			}
		}
	}
	return (b);
}
