#include "main.h"
void print_integer(int a);

/**
 * print_number - a function that prints an integer.
 * @b: An input integer
 * Return: Nothing
 */
void print_number(int b)
{
	if (b == 0)
		_putchar('0');
	else if (b < 0)
	{
		_putchar('-');
		print_integer(b * -1);
	}
	else
		print_integer(b);
}

/**
 * print_integer - A function to priting n
 * @a: an input unsigned integer
 * Return: Nothing
 */
void print_integer(int a)
{
	int i = 1000000000;

	for (; i >= 1; i /= 10)
		if (a / i != 0)
		{
			_putchar((a / i) % 10 + '0');
		}
}
