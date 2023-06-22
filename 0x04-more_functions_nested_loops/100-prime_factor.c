#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long int q = 3, p = 612852475143;

	for (; q < 12057; q += 2)
	{
		while (p % q == 0 && p != q)
			p /= q;
	}
	printf("%lu\n", p);
	return (0);
}
