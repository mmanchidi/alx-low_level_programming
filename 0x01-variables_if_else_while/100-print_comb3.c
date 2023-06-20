#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c, u;

	for (c = '0'; c < '9'; c++)
	{
		for (u = c + 1; u <= '9'; u++)
		{
			if (u != c)
			{
				putchar(c);
				putchar(u);

				if (c == '8' && u == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
