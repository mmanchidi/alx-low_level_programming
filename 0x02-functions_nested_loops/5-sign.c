#include "main.h"

/**
 * print_sign - Tohis function prints the sign of the number
 * @t: An input number 
 * Return: 1 if number is positive, o if number is 0, or
 * -1 if number is negative
 */
int print_sign(int t)
{
	int value;

	if (t > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (t == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
