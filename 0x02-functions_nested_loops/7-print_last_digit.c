#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @q: An integer input
 * Return: last digit of number q
 */
int print_last_digit(int q)
{
	int p;

	if (q < 0)
		p = -1 * (q % 10);
	else
		p = q % 10;

	_putchar((p % 10) + '0');
	return (p % 10);
}
