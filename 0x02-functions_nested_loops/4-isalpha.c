#include "main.h"

/**
 * _isalpha - function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * @m: An input character
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int m)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (m == lower || m == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
